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
