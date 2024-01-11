#include <bits/stdc++.h>
using namespace std;
// take input without space
int main() {
    int n; cin>>n;
    vector<string> s;
    for(int i = 0; i<n; i++)
    {
        string v;
        cin>>v;
        s.push_back(v);
        
    }
    for(string val:s)
    {
        cout<<val<<endl;
    }
    
    return 0;
}