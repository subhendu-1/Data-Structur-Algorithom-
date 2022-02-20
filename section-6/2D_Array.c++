#include<iostream> 
using namespace std;
int main(){
    // creat 2D array using stack memory
    // int size,size2;
    // cout << "Enter the size: "; 
    // cin >> size;
    // cout << "Enter the size2: ";
    // cin >> size2;
    // int a[size][size2];
    // for(int i = 0; i < size; i++){
    //     for(int j = 0; j < size2; j++){
    //         cin >> a[i][j];
    //     }
    // }
    // for(int i = 0; i < size; i++){
    //     for(int j = 0; j < size2; j++){

    //     cout << a[i][j] ;
    //     cout << endl;
    //     }
    // }
    //creat 2D array using stack and heap memory using pointer
//     int  *second_arr[3];
//   second_arr[0] = new int[4];
//   second_arr[1] = new int[4];
//   second_arr[2] = new int[4];
//   for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 4; j++){

//         cin >> second_arr[i][j];
        
//         }
//     }
    

//   for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 4; j++){

//         cout << second_arr[i][j];
//         cout << endl;
        
//         }
//     }
    // creat 2D array uisng double pointer in heap memory
    int **third_arr;
    int r,l;
    cout <<"Enter the row: ";
    cin >> r;
    cout << " Enter the column: ";
    cin >> l;
    third_arr = new int*[r];
    for(int i = 0; i < r; r++){
        third_arr[r] = new int[l];
    }
    for(int i = 0; i < r; i++){
        for(int j = 0; j < l; j++){
            cin >> third_arr[i][j];
        }
    }
    for(int i = 0; i < r; i++){
        for(int j = 0; j < l; j++){
            cout << third_arr[i][j];
        }
    }
    // creat 2D array uisng double pointer in heap memory
    // int **arr;
    // arr = new int*[3];
    // arr[0] = new int[4];
    // arr[1] = new int[4];
    // arr[2] = new int[4];
    // for(int i = 0; i < 3; i++){
    //     for(int j = 0; j < 4; j++){
    //         cin >> arr[i][j];
    //     }
    // }
    // for(int i = 0; i < 3; i++){
    //     for(int j = 0; j < 4; j++){
    //         cout << arr[i][j] << endl;
    //     }
    // }
    return 0;
}