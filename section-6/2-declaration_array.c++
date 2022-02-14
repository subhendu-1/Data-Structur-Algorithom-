#include<iostream>
using namespace std;
int main(){
    int a1[5];
    int a2[5] = {1,3,4,4,5};
    int a3[5] = {0};
    int a4[] = {1,34,4,67,5,3};
    // compile time initializtion
    int a5[5];
    for(int j=0; j < 5; j++){
        cout << "enter the value: ";
        cin >> a5[j];
    }
    for(int i = 0; i < 5; i++){
        cout << *(a5+i) << endl;
    }
    for(int i = 0; i < 5; i++){
        cout << a1[i] << endl;
    }
    cout << endl;
    for(int i = 0; i < 5; i++){
        cout << a2[i] << endl;
    }
    cout << endl;
    for(int i = 0; i < 5; i++){
        cout << a3[i] << endl;
    }
    cout << endl;
    for(int i = 0; i < 10; i++){
        cout << a4[i] << endl;
    }
    return 0;
}