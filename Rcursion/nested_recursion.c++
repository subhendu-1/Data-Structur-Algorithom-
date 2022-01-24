#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int fun(int n){
    if(n>100){
        return n - 10;
    }
    else{
        return fun(fun(n+11));
    }
}
int main(){
    int s;
    cout << "Enter the number: ";
    cin >> s;
    int t;
    t = fun(s);
    cout << t << endl;
    return 0;
}