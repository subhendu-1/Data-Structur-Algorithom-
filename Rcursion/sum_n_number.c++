#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int sum(int n)
{
    if(n == 0){
        return 0;
    }
    else{
        return sum(n-1)+n;
    }
}

int sum2(int n){
    return (n*(n+1))/2;
}
int sum3(int n){
    int s = 0;
    for(int i = 0; i <= n; i++)
    {
         s = s + i;
    }
    return s;
};
int main(){
    int x;
    x = sum(5);
    cout << x << endl;
    cout << sum3(5) << endl;
    cout << sum2(5) << endl;
    return 0;
}