#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void fun(int n)
{
    if(n>0){
        cout << n <<endl;
        fun(n-1);
        cout << n << endl;
    }
}
int main(){
      int x ;
      cout << "Enter the number: ";
      cin >> x;
      fun(x);
}