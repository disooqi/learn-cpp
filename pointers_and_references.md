C++ References
===
A reference variable is a _alias_ to an existing variable, and it is created with the `&` operator:
```
string food = "Pizza";  // food variable
string &meal = food;    // reference to food

cout << food << "\n";  // Outputs Pizza
cout << meal << "\n";  // Outputs Pizza
```

We can get the memory address of a variable by using the & operator:
```
cout << &food; // Outputs the memory address of food (0x6dfed4)
```

A reference is similar to a pointer except that you dont need to use a prefix unary `*` to access the value referred to by the reference. Also, a reference can't be made to refer to a different object after its initialization.

## Different Uses of `&` Symbol
1. Create a reference to a variable (i.e. _reference variable_); `string &meal = food;`
2. Get the memory address of a variable `cout << &food; // Outputs 0x6dfed4`
3. As an **and** operator `true && false`

C++ Pointers
===
A pointer is a variable that stores the memory address as its value. 
```
string* ptr = &food;    // A pointer variable, with the name ptr, that stores the address of food
```

C++ Dereference
---
we used the pointer variable to get the memory address of a variable (used together with the `&` reference operator). However, you can also use the pointer to get the value of the variable, by using the `*` operator (the _dereference operator_):
```
// Dereference: Output the value of food with the pointer (Pizza)
cout << *ptr << "\n";
```

Note that the `*` sign can be confusing here, as it does two different things in our code:
1. When used in declaration (`string* ptr`), it creates a pointer variable.
2. When not used in declaration, it act as a dereference operator.

