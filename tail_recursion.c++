#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void fun(int n){
    if(n>0){
        cout << n << endl;
        fun(n-1);    // all oparation perfrom calling time in tail recursion 
    
    }
}
//    This is Head recursion function
 void fun1(int n){
     if(n > 0){
         fun1(n-1);
         cout << n << endl;
     }
 }
//  This is Tree Recursion
 void fun2(int n){
     if(n > 0){
         cout << n << endl;
         fun2(n-1);
         fun2(n-1);
     }
 }
int main(){
    int x = 5;
    fun(x);
    fun1(x);
    fun2(x);
    return 0;
}