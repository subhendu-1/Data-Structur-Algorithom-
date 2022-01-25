#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    // int a = 10;
    // int *p;
    // p = &a;
    // cout << "the value of a is: " << a << endl;
    // cout << "the value of p is: " << *p << endl;
    // cout << "The address of a is: " << &a << endl;
    // cout << "The address of p is: " << p << endl;
    // ------------------------------------Array using pointer----------------------------------------
    // -----------------usint pointer create an array in stack----------------------------------------
    // int a[5]= {1,2,3,4,5};
    // int *q;
    // q = a;  // This position we are not wright q = &a because 
    // for(int i = 0; i < 5; i++){
    //     cout << q[i] << endl;
    // }

    // -----------------usint pointer create an array in heap----------------------------------------
    int *r;
    r = new int[5];
    r[0] = 1;
    r[1] = 2;
    r[2] = 3;
    r[3] = 4;
    r[4] = 5;
    for(int i = 0; i < 5; i++){
        cout << r[i] << endl;
    }

    delete [ ] r; //dealocating the memory
    int *a1;
    float *a2;
    char *a3;
    struct structure *a4;
    cout << sizeof(a1) << endl;
    cout << sizeof(a2) << endl;        // Whatever datatype you use pointer take same amount of memory
    cout << sizeof(a3) << endl;
    cout << sizeof(a4) << endl;

    return 0;
}