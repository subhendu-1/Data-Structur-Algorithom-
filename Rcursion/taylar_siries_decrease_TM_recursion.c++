#include<bits/stdc++.h>
#include<iostream>
using namespace std;
double e(int x,int n){
    static double s = 1;
     if(n == 0){
         return s;
     }
     else{
         s = 1+x*s/n;
         return e(x,n-1);
     }
}
// taylar series solution using iterative proccess
double e1(int x, int n){
    double s = 1;
    int i;
    double num =1;
    double dem =1;
    for(i = 0; i <= n; i++){
        num*=x;
        dem*=i;
        s+=num/dem;

    }
        return s;
}
int main(){
    int x;
    cout << "Enter the number: ";
    cin >> x;
    int y;
    cout << "Enter the power: ";
    cin >> y;
    double r;
    r = e(x,y);
    cout << "The answer is: ";
    cout << r << endl;
    cout << "iterative function answer is: ";
    cout << e1(x,y);
        return 0;
}