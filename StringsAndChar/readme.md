# Important functions on char 

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


**5. isupper() and islower()**
```cpp
 bool UpperCheck = isupper(ch);
 bool LowerCheck = islower(ch);
```
- `isupper`: This function returns a non-zero value if the character is an uppercase letter, and 0 otherwise.

- `islower`: This function returns a non-zero value if the character is a lowercase letter, and 0 otherwise.

**6. Converting char to integer and integer to char**
```cpp
char charDigit = '7';
int intValue = charDigit - '0';  // This converts '7' to 7
```
```cpp
int intValue = 7;
char charDigit = intValue + '0';  // This converts 7 to '7'
```
-------------------------------------------------
# Import functions related to strings 
**1. append()**
```cpp
string str = "Hello";
str.append(" World"); /// Output : Hello World
```
```cpp
str += " World";
```
- `+=`This will also do the same thing as `append()`

**2. substr()**
```cpp
string temp = "0123456789";
string sub = temp.substr(2,5); // 23456
```
- temp.`substr(starting_index , size_of_substring)`


**3. find()**
```cpp
string str = "Hello, World!";
size_t pos = str.find("World");
if (pos != string::npos)
{
    cout << "Found at position: " << pos << endl;
}
else
{
    cout << "Not found" << endl;
}
```
- if the substring is found in the string then it will return the first index of the substring 

**4. replace()**
```cpp
string test = "123456789";
test.replace(1,5,"Potato"); //1Potato789
```
- test.`replace(staringIndex , lengthToBeReplaced , NewSubstring)`
- First the string from starting index to the given size is removed "1 _ _ _ _ _ 789"
- Now the new given substring is added in the removed part 

**5. stoi()**
```cpp
string number = "45467";
int num = stoi(number);
```
- This converts a string to integer

**6. to_string()**
```cpp
string number = "45467";
int num = stoi(number);
```
- This converts the integer to string 

**7. insert()**
```cpp
string str1 = "0123456789";
str1.insert(2,"Hello"); //01Hello23456789
```
- `insert(index,string)`
- Here the first letter of the `string` will have the `index` same as the index given in the insert function
- In the main string the index of `H` is `2`

- Inserting a characer in string 
```cpp
str1.insert(str1.begin()+2,'H'); //01H23456789
```
- `H` will be inserted at index 2 in str2