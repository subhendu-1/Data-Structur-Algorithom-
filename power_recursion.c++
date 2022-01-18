#include<bits/stdc++.h>
using namespace std;
int pow(int m,int n){
    if(n == 0){
        return 1;
    }
    else{
        return pow(m,n-1)*m;
    }
}
// How to decreaes the function call in another method
int pow1(int m, int n){
    if(n == 0){
        return 1;
    }
    if(n % 2 == 0){
        return pow1(m * m,n / 2);
    }
    else{
        return m * pow1(m * m,(n-1) / 2);
    }
}
int main(){
    int x;
    cout << "Enter the digite: ";
    cin >> x;
    int y;
    cout << "Enter the power: ";
    cin >> y;
    int z;
    z = pow(x,y);
    cout << z << endl;
    cout << pow1(x,y);

    return 0;
}