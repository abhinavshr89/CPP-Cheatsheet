#include <iostream>
using namespace std;

int main() {
    char ch = 'a';

    char UpperCh = toupper(ch);
    cout << UpperCh << endl;

    char LowerCh = tolower(ch);
    cout << LowerCh << endl;

    cout<<isdigit(ch)<<endl;

    bool alphaCheck = isalpha(ch);
    cout<<alphaCheck<<endl;

    bool alphaNumericCheck = isalnum(ch);
    cout<<alphaNumericCheck<<endl;
    return 0;
}