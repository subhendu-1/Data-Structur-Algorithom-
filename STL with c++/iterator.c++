#include<bits/stdc++.h>
using namespace std;
int main(){
    // vector<int>v = {1,3,4,5,5,6};
    // vector<int>:: iterator it;
    // for (auto it = v.begin(); it != v.end(); it++){
    //     cout << (*it) << endl;
    // }


    // vector of  pair uisng iterators
    vector<pair<int,int> > v_p = {{1,3},{3,4},{2,5}};
    // vector<pair<int,int>> :: iterator it;
    for(auto it = v_p.begin(); it != v_p.end(); it++){
        cout << (it->first) << " " << (it->second) << endl;
    }

    
   return 0;

    }
