#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    string name;
    map<string,int> m;
    m["Rajasthan "]=165685656;
    m["Karnataka"]=25456;
    m["Punjab"]=64676;
    m["Goa"]=64673;
    map<string,int>::iterator it;
    cout<<"Enter the name of the state:";
    cin>>name;
    it=m.find(name);
    if(it!=m.end())
    cout<<it->second;
    else
    cout<<"element not found";
}