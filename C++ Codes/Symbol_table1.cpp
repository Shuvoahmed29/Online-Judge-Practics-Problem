#include <iostream>
#include <unordered_map>
#include <string>

class Entry {
public:
    std::string name;
    std::string type;

    Entry(const std::string& name, const std::string& type)
        : name(name), type(type) {}
};

class SymbolTable {
public:
    SymbolTable() {}

    void insert(const std::string& name, const std::string& type) {
        entries[name] = Entry(name, type);
    }

    Entry* search(const std::string& name) {
        auto it = entries.find(name);
        return (it != entries.end()) ? &it->second : nullptr;
    }

    void display() {
        std::cout << "Symbol Table:\n";
        for (const auto& entry : entries) {
            std::cout << "Name: " << entry.second.name << " | Type: " << entry.second.type << '\n';
        }
    }

private:
    std::unordered_map<std::string, Entry> entries;
};

int main() {
    SymbolTable symbol_table;

    // Insert some entries into the symbol table
    symbol_table.insert("x", "int");
    symbol_table.insert("y", "float");
    symbol_table.insert("z", "char");

    // Search for an entry
    Entry* entry = symbol_table.search("y");
    if (entry) {
        std::cout << "Found: Name = " << entry->name << ", Type = " << entry->type << '\n';
    } else {
        std::cout << "Not Found\n";
    }

    // Display the symbol table
    symbol_table.display();

    return 0;
}
