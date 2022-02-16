#include<iostream>
using namespace std;
int main(){
    int *p,*q;
    p = new int[5];
    p[0]=1;
    p[1]=2;
    p[2]=3;
    p[3]=4;
    p[4]=5;
    
    
    // Increase the array size of p
    q = new int[10];
    
    // p's all value copy in q
    for(int i = 0; i < 10; i++){
        q[i] = p[i];
    }
   
    delete []p; // Delete the first array
    p = q;
    p = NULL;
    
    for(int i = 0; i < 5; i++){
        cout << q[i] << endl;
    }
    cout << sizeof(q)/sizeof(q[0]);
    return 0;
}