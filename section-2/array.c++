#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the value: ";
    cin >> n;
    int a[n];
    for(int i = 0; i <= n-1; i++){
        cin >> a[i];
    }
    for(int i=0; i < n; i++){
        cout << a[i] << endl;
    }
    cout << a[0] << endl;
    cout << a[1] << endl;
    cout << a[3] << endl;
    cout << a[12] << endl;
    return 0;
}