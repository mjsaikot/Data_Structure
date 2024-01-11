#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {10,20,30,40};
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.pop_back(); //remove from vector from right side;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.push_back(50);  //add in vector to right side
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    return 0;
}