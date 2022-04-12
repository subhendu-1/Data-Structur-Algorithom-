#include<bits/stdc++.h>
using namespace std;
struct Array {
    int *z;
    int size;
    int length;
};
void Display(struct Array *arr){
    cout << "Element are: " << endl;
    for(int i = 0; i < arr->length; i++){
        cout << arr->z[i] << endl;
    }
}

void adding(struct Array *arr, int x){
    if(arr->length < arr->size){
        arr->z[arr->length] = x;
        arr->length++;
    }
}

void insertion(struct Array *arr,int index, int value){
    if(index >= 0 && index <= arr->length){
        for(int i = arr->length; i > index; i--){
            arr->z[i] = arr->z[i-1];
        }
        arr->z[index] = value;
        arr->z[arr->length++];
    }
}

int deletion(struct Array *arr,int index){
    int x = 0;
    int i;
    if(index >= 0 && index <= arr->length){
    x = arr->z[index];
    for(i = index; i < arr->length; i++){
        arr->z[i] = arr->z[i+1];
    }
    arr->z[arr->length--];
    return x;
    }
    return 0;
}

int main(){
    struct Array arr;
    int i,n;
    cout << "Enter the array size: " << endl;
    cin >> arr.size;
    arr.z = new int (arr.size);
    arr.length = 0;
    
    cout << "Enter the number of number: " ;
    cin >> n;
    cout << "Enther the elements: " << endl;
    for(i = 0; i < n; i++){
        cin >> arr.z[i];
    }
    arr.length = n;
    int b;
    cout << "Enter the adding value: " ;
    cin >> b;
    adding(&arr,b);
    // int index,value;
    // cout << "Enter the index: ";
    // cin >> index;
    // cout << "Enter the value: ";
    // cin >> value;
    // insertion(&arr,index,value);
    

    int index2;
    cin >> index2;
    deletion(&arr,index2);
    Display(&arr);
    return 0;
}