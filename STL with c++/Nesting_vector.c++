#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// Nesting pair of vector printing function
// void printVec(vector<pair<int,int> > &v){
//     cout << "size: " << v.size() << endl;
//     for(int i = 0; i < v.size(); i++){
//         cout << v[i].first << " " << v[i].second <<endl;
//     }
//     cout << endl;
// }
// Nesting array of vector printing function
void printVec_array(vector<int> &v){
    cout << "size: " << v.size() << endl;
    for(int i = 0; i < v.size(); i++){
        cout << v[i]<< " ";
    }
    cout << endl;
}
int main(){
    // Nesting pair of vector
    // vector<pair<int,int>>v;
    // int n_vector;
    // cin >> n_vector;
    // for(int i = 0; i < n_vector; i++){
    //     int x,y;
    //     cin >> x >> y;
    //     v.push_back({x,y});
    // }
    // printVec(v);
  

  // Nesting array of vector
//   int N;
//   cout << "Enter the rows size: " << endl;
//   cin >> N;
//   vector<int> v[N];
//   for(int i = 0; i < N; i++){
//   int n;
//   cout << "Enter the column number: " << endl;
//   cin >> n;
//   for(int j = 0; j < n; j++){
//       int x;
//       cout << "Enter the rows value: " << endl;
//       cin >> x;
//       v[i].push_back(x);
//   }
//   }
//   for(int k = 0; k < N; k++){
//       printVec_array(v[k]);
//   }
//   cout << v[0][2];
  
//   nesting vector of vector 
// because we she that vector of array row size are not dynamic size so we used this NVV
  
  
//   int N;
//   cout << "Enter the rows size: " << endl;
//   cin >> N;
//   vector<vector<int> > v;
//   for(int i = 0; i < N; i++){
//   int n;
//   cout << "Enter the column number: " << endl;
//   cin >> n;
//   vector<int> temp;
//   for(int j = 0; j < n; j++){
//       int x;
//       cout << "Enter the rows value: " << endl;
//       cin >> x;
//       temp.push_back(x);
//   }
//       v.push_back(temp);
//   }

//   for(int k = 0; k < N; k++){
//       printVec_array(v[k]);
//   }
//   cout << v[0][2];

//   OR METHOD :-> this method not using extra vector
    int N;
  cout << "Enter the rows size: " << endl;
  cin >> N;
  vector<vector<int>> v;
  for(int i = 0; i < N; i++){
  int n;
  cout << "Enter the column number: " << endl;
  cin >> n;
  v.push_back(vector<int>());
  for(int j = 0; j < n; j++){
      int x;
      cout << "Enter the rows value: " << endl;
      cin >> x;
      v[i].push_back(x);
  }
  }
  for(int k = 0; k < N; k++){
      printVec_array(v[k]);
  }
  cout << v[0][2];
    return 0;
}