#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// this is recursion time complexcity is O(2^n)
int fib(int n){
    if(n <= 1){
        return n;
    }
    else{
        return fib(n-2)+fib(n-1);
    }
}
// ittareative function
int Ifib(int n){
    int t0 = 0,t1 = 1,s,i;
    if(n <= 1){
        return n;
    }
    for(i = 2; i <= n; i++){
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    }
    return s;

}

// This is best recursion for fibonacci series timecompaxcity is O(n)
int F[10];
int fib1(int n){
if(n <= 1){
    F[n] = n;
    return n;
}
else{
    if(F[n-2] == -1){
        F[n-2] = fib1(n-2);
    }
    if(F[n-1] == -1){
        F[n-1] = fib1(n-1);
    }
    return fib1(n-2) + fib1(n-1);
}
}
int main(){
    int x;
    cout << "Enter the index you went to fibonacci number: ";
    cin >> x;
    int s;
    s = fib(x);
    cout << s << endl;
    cout << Ifib(x) << endl;
    cout << fib1(x) << endl;
    return 0;
}