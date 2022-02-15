#include<iostream>
using namespace std;
int main(){
    int size;
    cout << "Enter the array size: " ;
    cin >> size;
    int a[size];
    int *p;
    p = new int[size];
    for(int i = 0; i < size; i++){
        cin >> a[i];
    }
    delete []p;
    for(int i = 0; i < size; i++){
        cout << a[i] << endl;
    }
   
    return 0;
}