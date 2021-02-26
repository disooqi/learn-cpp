* By convention, reading of strings is terminated by what is called whitespace, that is, space, newline, and tab characters.
* The reason for the name double is historical: double is short for _double-precision floating point_. Floating point is the computer’s approximation to the mathematical concept of a real number.
***

```cpp
// read name and age
int main()
{
    cout << "Please enter your first name and age\n";
    string first_name;
    // string variable
    int age;
    // integer variable
    cin >> first_name;
    // read a string
    cin >> age;
    // read an integer
    cout << "Hello, " << first_name << " (age " << age << ")\n";
}
```
* The output will be 22 followed by some random number, such as – 96739 or 0 . Why? You didn’t give age an initial value and you didn’t
succeed in reading a value into it. Therefore, you get some “garbage value” that happened to be in that part of memory when you started executing.

***
* The while in `while (cin>>current)` says that the statement after (`cin >> current`) is to be repeated as long as the input operation `cin>>current` succeeds, and `cin>>current` will succeed as long as there are characters to read on the standard input.
* Our “house style” is to use underscores to separate words in an identifier, such as element_count , rather than alternatives, such as elementCount and ElementCount . We never use names with all capital letters, such as ALL_CAPITAL_LETTERS , because that’s conventionally reserved for macros (§27.8 and §A.17.2), which we avoid. We use an initial capital letter for types we define, such as Square and Graph.
* 
