#include <iostream>
#include <cmath>
#include "Vector.h"


using namespace std;

void print(char* x){
    cout << x << endl;
}

double square(double x){
    return x*x;
}

void print_square(double x){
    cout << square(x) << endl;
}

void print_sizeof(){
    cout << "Size of char type is " << sizeof(char) << endl;
    cout << "Size of bool type is " << sizeof(bool) << endl;
    cout << "Size of int type is " << sizeof(int) << endl;
    cout << "Size of double type is " << sizeof(double) << endl;

}

void print_type_conversion(){
    int x = 6;
    double y = 0.3;
    cout << "x: " << x << " and y:  " << y << " ---> x/y = " << x/y << endl;
//    cout << "The type of x/y is " << typeof(x/y) << endl;
}

bool accept(){
    cout << "Do you want to proceed? (Y or N)" << endl;
    char answer = 0;
    cin >> answer;

    if(answer == 'Y'){
        cout << "it is Yes" << endl;
    }else{
        cout << "it is No" << endl;
    }

    if(answer == 'Y')
        cout << "it is a Pythonic Yes" << endl;
    else cout << "it is a Pythonic No" << endl;

    switch (answer){
        case 'Y':
            cout << "Yesssss" << endl;
            break;
        case 'N':
            cout << "Nooooooooo!" << endl;
            break;
        default:
            cout << "What the hell is " << answer << endl;

    }
}

void initialization(){
    int x = 5; // initialization
    int y {5}; // another way of initialization
    int z = 5.9; // to prevent implicit conversion use "int z = {4.7};"

//    vector<int> V1 {1,2,3,4,5};
//    vector<int> V2  = {1,2,3,4,5};

    auto b = true;
    auto s = "string";
    auto c = 'p';
    auto r {5.7}; // With auto we use '=' to  initialize variables instead of universal form because there is no type
    // conversion.
}

void copy_fct(){
    int l1[10] {1,2,3,4,5,6,7,8,9,10};
    int l2[10];

    for(auto i=0; i<10; i++){
        l2[i] = l1[i];
    }

    // a range-for-statement, (x is a copy)
    for(auto x : l1)
        cout << x << endl;

    // x is a reference
    for(auto& x : l1)
        x++;
        //*******************************************************************
        // ***** a reference is similar to a pointer except that you dont need to use a prefix unary * to access the
        // ***** value referred to by the reference. Also, a reference can't be made to refer to a different object
        // ***** after its initialization.
        //*******************************************************************
}

void declarator_operator(){
    char v[6]; //declaration of array of 6 characters

    v[0] = 70;
    cout << v[0] << endl;

    char* p = &v[3]; // pointer to character, prefix unary & means "Address of"
    char ch = *p; // prefix unary * means "content of"

    int* t = nullptr;

//    Link<Record> *lst = nullptr;
}

int count_x(char* c, char x){
    // c is a C-style string
    // count the number of occurrences of x in p[]
    // c is assumed to point to a zero-terminated array of char.
    if(c == nullptr) return 0;

    int count = 0;
    for(; *c!=0; c++){
        if(x==*c)
            ++count;
    }
    return count;
}

double square_sum(Vector& v){
    int sum = 0;
    try {
        for(auto i=0;i!=v.size()+10;++i){
            sum+=v[i];
        }
    } catch(const out_of_range& e){
        cout << "Out of range"<<endl;
    }

    return sum;
}

int main() {
    Vector v{10};
    for(auto i=0; i!=10;++i){
        v[i] = square(i);
    }
//    char v[6] {'a', 'b', 'c', 'a', 0};
    cout << square_sum(v) << endl;


    return 0;
}

