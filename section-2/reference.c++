#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 29;
    int &r = a; //reference is a another name of any other variable
    int b = 23;
    r = b;
    cout << a << endl;
    cout << r << endl;
    return 0;
}