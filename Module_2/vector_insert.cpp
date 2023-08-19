#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1,6,7,8,9,0};
    for(int x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    vector<int> a = {2,3,4,5};
    v.insert(v.begin()+1,a.begin(),a.end());
    for(int x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}