#include<iostream>
using namespace std;
struct rectangle{
    int length;
    int breadth;
};
int main(){
    // rectangle r;
    // r.length = 12;
    // r.breadth = 14;
    // cout <<  r.length << endl;
    // cout << r.breadth << endl;
    // // using pointer structure declearation
    // rectangle *p = &r;
    // p->length = 13;
    // p->breadth =15;
    // cout << p->length << endl;
    // cout << p->breadth << endl;
    // return 0;

    // usint pointe dynamic memory allocation

    rectangle *p;
    p = new rectangle;
    p->length = 20;
    p->breadth =30;
    cout << p->length << endl;
    cout << p->breadth << endl;
}