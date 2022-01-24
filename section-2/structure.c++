#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// this is defination of structure
struct student{
    int roll;
    char name[10];
    char dept[10];
    char add[50];
};
struct rectangle{
    int lenght;
    int breadth;
};

int main(){
    struct student s[5];// = {{20,sAdak,IT,pingla},{34,b.Das,ECE,bhemua}};
    struct rectangle r = {10,5};
    r.lenght = 25;
    cout << sizeof(r) << endl;
    cout << r.lenght << endl;
    s[0].roll = 23;
    s[1].roll = 23;
    cout << sizeof(s) << endl;
    cout << s[0].roll << endl;
    cout << s[0].name << endl;
    cout << s[0].dept << endl;
    cout << s[1].roll << endl;
    cout << s[1].name << endl;
    cout << s[1].add << endl;
    return 0;
}