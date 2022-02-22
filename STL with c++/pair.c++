#include<iostream>
using namespace std;
int main(){
    pair<int,string>p;
    // pair intialization
    // p = make_pair(2,"subhendu");
    p = { 1,"subhendu" };

    // when you want to change p1 first value this is not change because p copy this p1 not referancing so &p1  = p use this position
    // pair<int,string> p1 = p; // out put :- 1 subhendu
    pair<int,string>&p1 = p; // out put :- 3 subhendu
    p1.first = 3;
    // cin >> p.first;
    // cin >> p.second;

    cout << p.first << " " << p.second << endl;


    // how to join this two array in one name
    // int a[3] = {1,2,3};
    // int b[3] = {2,3,4};

    pair<int,int>p1_array[3];
    p1_array[0] = { 1,2 };
    p1_array[1] = { 2,3 };
    p1_array[2] = { 3,4 };
    swap(p1_array[0],p1_array[2]);
    for(int i =0; i < 3; i++){
        cout << p1_array[i].first << " "<< p1_array[i].second << endl;
    }

    // take the input user code
    int size;
    cin >> size;
    pair<int,int>p_array[size];
    for(int i = 0; i < size; i++){
        cin >> p_array[i].first;
        cin >> p_array[i].second;
    }
    for(int i = 0; i < size; i++){
    cout << p_array[i].first <<  " " <<  p_array[i].second << endl;
    }
    return 0;
}