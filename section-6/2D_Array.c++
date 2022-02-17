#include<iostream> 
using namespace std;
int main(){
    int size,size2;
    cout << "Enter the size: "; 
    cin >> size;
    cout << "Enter the size2: ";
    cin >> size2;
    int a[size][size2];
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size2; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size2; j++){

        cout << a[i][j] << endl;
        }
    }
}