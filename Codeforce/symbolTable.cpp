#include <iostream>
#include <unordered_map>
#include <string>

int main() {
    // Symbol table represented using an unordered_map
    std::unordered_map<std::string, std::string> symbol_table;

    // Insert some entries into the symbol table
    symbol_table["x"] = "int";
    symbol_table["y"] = "float";
    symbol_table["z"] = "char";

    // Search for an entry
    const std::string search_key = "y";
    auto it = symbol_table.find(search_key);
    if (it != symbol_table.end()) {
        std::cout << "Found: Name = " << it->first << ", Type = " << it->second << '\n';
    } else {
        std::cout << "Not Found\n";
    }

    // Display the symbol table
    std::cout << "Symbol Table:\n";
    for (const auto& entry : symbol_table) {
        std::cout << "Name: " << entry.first << " | Type: " << entry.second << '\n';
    }

    return 0;
}
