#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int a = 0;
int fun(int n){
    // static int a = 0;
    if(n>0){
        a++;
        // return fun(n-1)+n;
        return fun(n-1)+a;
    }
    return 0;
}
int main(){
    int x = 5;
    cout << fun(x) << endl;
    cout << fun(x);
    return 0;
}