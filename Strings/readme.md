# Importanct functions on char 

**1. toupper and tolower**
```cpp
char ch = 'a';
char UpperCh = toupper(ch);   // 'A'
char LowerCh = tolower(ch);   // 'a'
```
- `toupper` and `tolower`: These functions convert a character to its uppercase or lowercase equivalent, respectively. If the character is already in the desired case or is not a letter, the functions return the character unchanged. The return type is int, so you may need to cast it to char for proper output

**2. isdigit**
```cpp
cout<<isdigit(ch)<<endl;
```
- `isdigit`: This function returns a non-zero value (true) if the character is a digit ('0' to '9'), and 0 (false) otherwise.