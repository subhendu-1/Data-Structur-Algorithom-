#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void printVec(vector<int>&v){
    cout << "size: " << v.size() << endl; // v.size() function timecomplexsity:- O(1)
    for(int i = 0; i < v.size(); i++){
         cout << v[i] << " ";
    }
    v.push_back(3);
    cout << endl;
}
int main(){
    vector<int> v;
    // int size;
    // cin >> size;
    // for(int i = 0; i < size; i++){
    //     int value;
    //     cin >> value;
    //     printVec(v);
    //     v.push_back(value);  // this function join the value end side of the vector
        
    // }
    v.push_back(7);
    v.push_back(4);
    // v.pop_back(); // This function pop out or remove element from the last of vector
    vector<int> v1 = v; // copy the vector of v in v1
    v1.push_back(5);
    printVec(v);
    printVec(v);
    printVec(v1);
    return 0;
}