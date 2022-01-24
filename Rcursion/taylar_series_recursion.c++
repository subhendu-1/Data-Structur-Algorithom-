#include<iostream>
#include<bits/stdc++.h>
using namespace std;
double e(int x,int n){
    static double p = 1,f = 1;
    double r;
    if(n == 0){
        return 1;
    }
    else{
        r = e(x,n-1);
        p = p * x;
        f = f * n;
        return (r + p/f);
    }
}
int main(){
    int x;
    cout << "Enter the number: ";
    cin >> x;
    int n;
    cout << "Enter the power: ";
    cin >> n;
    double r;
    r = e(x,n);
    cout << "The answer is: ";
    cout << r << endl;
    return 0;
}