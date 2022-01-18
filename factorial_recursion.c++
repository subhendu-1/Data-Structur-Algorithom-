// #include<iostrram>
#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n == 0){
        return 1;
    }
    else{
        return fact(n-1)*n;
    }
}

// itetative function
int Ifact(int n){
    int x = 1;
    int i;
    for(i = 1; i <= n; i++){
        x = x * i;
    }
    return x;
}
int main(){
    int x;
    cout << "Enter the number: ";
    cin >> x;
    int r;
    r = fact(x);
    cout << r << endl;
    cout << Ifact(x) << endl;
    return 0;
}