//
// Created by disooqi on 2020-04-04.
//

#include <stdexcept>
#include "Vector.h"
using namespace std;

Vector::Vector(const int s)
    :elem{new double[s]}, sz{s}
    {
        const int siz = 55;
//        static_assert(s>=0, "s should be non-negatve");
    }

double& Vector::operator[](int i) {
    if(i<0 || i>=size())
        throw out_of_range{"Vector::operator[]"};
    return elem[i];
}

int Vector::size() {
    return sz;
}