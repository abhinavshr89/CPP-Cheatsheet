#include <iostream>
using namespace std;

int main() {
    char ch = 'a';

    char UpperCh = toupper(ch);
    cout << UpperCh << endl;

    char LowerCh = tolower(ch);
    cout << LowerCh << endl;

    cout<<isdigit(ch)<<endl;
    
    return 0;
}