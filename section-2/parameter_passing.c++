#include<iostream>
using namespace std;
// This is call by value
int add(int c,int d){
    int e;
    c++;
    cout << c << endl;
    e = c + d;
    return e;
}
// call by address
void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
// call by reference
void swap2(int &f,int &g){
    int temp;
    temp =f;
    f = g;
    g = temp;
}
int main(){
    int x,y;
    cout << "Enter the x & y value: ";
    cin >> x >> y;
    // this is call by value
    int z;
    z = add(x,y);
    cout<< z << endl;
    swap(&x,&y);
    cout << x <<" "<<  y << endl;
    swap2(x,y);
    cout << x << " " << y;
    return 0;
}