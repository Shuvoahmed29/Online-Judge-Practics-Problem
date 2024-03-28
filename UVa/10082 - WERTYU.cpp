#include <bits/stdc++.h>
using namespace std;
/*-----------------SHUVO AHMED------------------------------*/
#define nl '\n'
typedef long long int ll;
#define Sort(x) sort(x.begin(), x.end())
#define Reverse(x) reverse(x.begin(), x.end())

#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
#define sq(x) (x) * (x)

#define min3(a, b, c) min(a, min(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define max3(a, b, c) max(a, max(b, c))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
#define pb(x) push_back(x)
#define mod 1000000007
/*-----------------SHUVO AHMED--------------------------------*/
char solve(char c)
{
    switch (c)
    {
    case '1':
        return '`';
    case '2':
        return '1';
    case '3':
        return '2';
    case '4':
        return '3';
    case '5':
        return '4';
    case '6':
        return '5';
    case '7':
        return '6';
    case '8':
        return '7';
    case '9':
        return '8';
    case '0':
        return '9';
    case '-':
        return '0';
    case '=':
        return '-';
    case 'W':
        return 'Q';
    case 'E':
        return 'W';
    case 'R':
        return 'E';
    case 'T':
        return 'R';
    case 'Y':
        return 'T';
    case 'U':
        return 'Y';
    case 'I':
        return 'U';
    case 'O':
        return 'I';
    case 'P':
        return 'O';
    case '[':
        return 'P';
    case ']':
        return '[';
    case '\\':
        return ']';
    case 'S':
        return 'A';
    case 'D':
        return 'S';
    case 'F':
        return 'D';
    case 'G':
        return 'F';
    case 'H':
        return 'G';
    case 'J':
        return 'H';
    case 'K':
        return 'J';
    case 'L':
        return 'K';
    case ';':
        return 'L';
    case '\'':
        return ';';
    case 'X':
        return 'Z';
    case 'C':
        return 'X';
    case 'V':
        return 'C';
    case 'B':
        return 'V';
    case 'N':
        return 'B';
    case 'M':
        return 'N';
    case ',':
        return 'M';
    case '.':
        return ',';
    case '/':
        return '.';
    case ' ':
        return ' ';
    case '\n':
        return '\n';
    }
    return ' ';
}
int main()
{
    char c;
    while (scanf("%c", &c) != EOF)
    {
        printf("%c", solve(c));
    }
}