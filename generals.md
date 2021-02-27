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
* An object is some memory that holds a value of a given type.
***
```cpp
char c = 'x';
int i1 = c;
int i2 = 'x';
```
We call this char -to- int conversion safe because no information is lost; that is, we can copy the resulting int back into a char and get the original value:
```cpp
char c2 = i1;
cout << c << ' << i1 << ' << c2 << '\n';
```
In this sense — that a value is always converted to an equal value or to the best approximation of an equal value — these conversions are safe:
* bool to char
* bool to int
* bool to double
* char to int
* char to double
* int to double
***
# C++11

C++11 introduced an initialization notation that outlaws narrowing conversions:
```cpp
double x {2.7};
int y {x}; // OK
// error: double -> int might narrow
```
When the initializer is an integer literal, the compiler can check the actual value and accept values that do not imply narrowing:
```cpp
char b1 {1000};  // error: narrowing (assuming 8-bit chars)
char b2 {48};  // OK
```
Q: So what should you do if you think that a conversion might lead to a bad value? 
* Use `{}` initializers to avoid accidents, and when you want a conversion, check the value before assigning as we did in the first example in this section. See
§5.6.4 and §7.5 for a simplified way of doing such checking. The {}-list-based notation is known as **universal and uniform initialization**.

***
C++ offers the notion of a symbolic constant, that is, a named object to which you can’t give a new value after it has been initialized.
```cpp
constexpr double pi = 3.14159;
pi = 7;  // error: assignment to constant
double c = 2*pi*r;  // OK: we just read pi; we don’t try to change it
```
