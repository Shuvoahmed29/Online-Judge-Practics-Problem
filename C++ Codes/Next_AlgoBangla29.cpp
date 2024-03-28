#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
bool isVowel(char ch){
    if(ch=='a'||ch=='A') return true;
    if(ch=='e'||ch=='E') return true;
    if(ch=='i'||ch=='I') return true;
    if(ch=='o'||ch=='O') return true;
    if(ch=='u'||ch=='U') return true;
    else return false;
}
char Nextvowel(char ch){
    if(ch=='a') return 'e';
    if(ch=='e') return 'i';
    if(ch=='i') return 'o';
    if(ch=='o') return 'u';
    if(ch=='u') return 'a';
    else return 'p';
}
char Next_Vowel(char ch){
    if(ch=='A') return 'E';
    if(ch=='E') return 'I';
    if(ch=='I') return 'O';
    if(ch=='O') return 'U';
    if(ch=='U') return 'A';
    else return 'p';
}
int main(){
    code();
    string str;    getline(cin,str);
    int n = str.length();
    for(int i=0;i<n;i++){
        if(str[i] == ' ') cout << str[i];
        else if(isVowel(str[i])){
            if(str[i]>=97 && str[i]<=122){
                cout << Nextvowel(str[i]);
            }
            else{
                cout << Next_Vowel(str[i]);
            }
        }
        else if(str[i]>='0' && str[i]<='9'){
            if(str[i]=='9') cout << '0';
            else cout << char(str[i]+1);
        }
        else{
            if(str[i]>=97 && str[i]<=122){
                if(str[i]=='z') cout << 'b';
                else{
                    char ch = str[i]+1;
                    if(!isVowel(ch)) cout << ch;
                    else cout << char(ch+1);
                }
            }
            else{
                if(str[i]=='Z') cout << 'B';
                else{
                    char ch = str[i]+1;
                    if(!isVowel(ch)) cout << ch;
                    else cout << char(ch+1);
                }
            }
        }
    }
}
