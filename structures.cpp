//
// Created by disooqi on 2020-04-04.
//
#include <iostream>

struct Vector{
    int sz;
    double* elem;
};

void vector_init(Vector& v, int s){
    v.elem = new double[s];  // allocate an array of s doubles
    v.sz = s;
}

double read_and_sum(int s){
    Vector v;
    vector_init(v, s);

    for(auto i=0;i!=s;++i){
        std::cin >> v.elem[i];
    }

    double sum = 0;
    for(auto i=0;i!=s;++i){
        sum+=v.elem[i];
    }
    return sum;
}

void f(Vector v, Vector& r, Vector *p){
    int s1 = v.sz;
    int s2 = r.sz;
    int s3 = p->sz;
}

