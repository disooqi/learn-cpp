//
// Created by disooqi on 2020-04-04.
//

#ifndef LEARN_C___VECTOR_H
#define LEARN_C___VECTOR_H


class Vector {
public:
    Vector(int s);
    double&operator[](int i);
    int size();
private:
    int sz;
    double* elem;
};


#endif //LEARN_C___VECTOR_H
