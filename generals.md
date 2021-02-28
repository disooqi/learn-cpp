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

* C++ offers the notion of a symbolic constant, that is, a named object to which you can’t give a new value after it has been initialized.
```cpp
constexpr double pi = 3.14159;
pi = 7;  // error: assignment to constant
double c = 2*pi*r;  // OK: we just read pi; we don’t try to change it
```
***


### Conversions
Note that `a<b<c` means `(a<b)<c` and that `a<b` evaluates to a Boolean value: true or false . So, `a<b<c` will be equivalent to either `true<c` or `false<c` . In particular, `a<b<c` does not mean "Is b between a and c ?" as many have naively (and not unreasonably) assumed. Thus, `a<b<c` is basically a useless expression. Don’t write such expressions with two comparison operations, and be very suspicious if you find such an expression in someone else’s code — it is most likely an error.
```cpp
2.5/double(2)
```
`2.5/2` means `2.5/double(2)` , that is, 1.25
`'a'+1` means `int{'a'}+1`

* The notations `type(value)` and `type{value}` mean *convert value to type as if you were initializing a variable of type `type` with the value `value`*. In other words, if necessary, the compiler converts (“promotes”) int operands to `double`s or char operands to `int`s. The type{value} notation prevents narrowing (§3.9.2), but the type(value) notation does not.
***
* There no thing such else-if statement in C++.

## 4.6 vector
* A vector doesn’t just store its elements, it also stores its size.
```cpp
vector<int> v = {5, 7, 9, 4, 6, 8};  // vector of 6 ints
```

* We can also define a vector of a given size without specifying the element values. In that case, we use the _(n) notation_ where n is the number of elements, and the elements are given a _default value_ according to the element type.

```cpp
vector<int> vi(6); // vector of 6 ints initialized to 0
vector<string> vs(4); // vector of 4 strings initialized to “”
```
traverse vector like this:
```cpp
vector<int> v = {5, 7, 9, 4, 6, 8};

for (int i=0; i<v.size(); ++i)
    cout << v[i] << '\n';

for (int x : v) // for each x in v
    cout << x << '\n';
```
* More complicated loops, such as looking at every third element of a vector , looking at only the second half of a vector , or comparing elements of two vector s, are usually better done using the more complicated and more general traditional for -statement (§4.4.2.3).
* `push_back()` adds new element as a last element. Often, we start a vector empty and grow it to its desired size as we read or com-
pute the data we want in it.

```cpp
vector<double> values;

// for-statement will read all the double s we give it and stop when we give it anything else.
for(double i; cin >> i;)
    values.push_back(i);
```
