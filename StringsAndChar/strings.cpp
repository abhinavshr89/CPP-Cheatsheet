#include <iostream>
using namespace std;

int main()
{
    char ch = 'a';

    char UpperCh = toupper(ch);
    cout << UpperCh << endl;

    char LowerCh = tolower(ch);
    cout << LowerCh << endl;

    cout << isdigit(ch) << endl;

    bool alphaCheck = isalpha(ch);
    cout << alphaCheck << endl;

    bool alphaNumericCheck = isalnum(ch);
    cout << alphaNumericCheck << endl;

    bool UpperCheck = isupper(ch);
    bool LowerCheck = islower(ch);

    string str = "Hello";
    // str.append(" World");
    str += " World";
    cout << str << endl;

    string temp = "0123456789";
    string sub = temp.substr(2, 5);
    cout << sub << endl;

    string test = "123456789";
    test.replace(1,5,"Potato");
    cout<<test<<endl;
    
    string number = "45467";
    int num = stoi(number);
    cout << num << endl;


    int val = 121323;
    string strVal = to_string(val); 
    cout << strVal << endl;

    string str1 = "0123456789";
    // str1.insert(2,"Hello");
    str1.insert(str1.begin()+2,'H');
    cout<< str1 << endl;
    return 0;
}