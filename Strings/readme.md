# Importanct functions on char 

**1. toupper() and tolower()**
```cpp
char ch = 'a';
char UpperCh = toupper(ch);   // 'A'
char LowerCh = tolower(ch);   // 'a'
```
- `toupper` and `tolower`: These functions convert a character to its uppercase or lowercase equivalent, respectively. If the character is already in the desired case or is not a letter, the functions return the character unchanged. The return type is int, so you may need to cast it to char for proper output

**2. isdigit()**
```cpp
bool check = isdigit(ch);
```
- `isdigit`: This function returns a non-zero value (true) if the character is a digit ('0' to '9'), and 0 (false) otherwise.

**3. isalpha()**
```cpp
bool alphaCheck = isalpha(ch);
```
- `isalpha`: This function returns a non-zero value if the character is an alphabetic letter (either uppercase or lowercase), and 0 otherwise.

**4. isalnum()**
```cpp
bool alphaNumericCheck = isalnum(ch);
```
- `isalnum`: This function returns a non-zero value if the character is alphanumeric (either a digit or a letter), and 0 otherwise.


**5. isupper and islower**
```cpp
 bool UpperCheck = isupper(ch);
 bool LowerCheck = islower(ch);
```
- `isupper`: This function returns a non-zero value if the character is an uppercase letter, and 0 otherwise.

- `islower`: This function returns a non-zero value if the character is a lowercase letter, and 0 otherwise.
