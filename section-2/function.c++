#include<iostream>
using namespace std;
int add(int x,int y){
    int z = x + y;
    return z;
}
int main(){
    int num1,num2,sum;
    cout << "Enter the first number: " << endl;
    cin >> num1;
    cout << "Enter the second number: " << endl;
    cin >> num2;
    sum = add(num1,num2);
    cout << sum << endl;
    
    return 0;
}