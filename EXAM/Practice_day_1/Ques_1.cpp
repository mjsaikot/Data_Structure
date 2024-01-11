#include <bits/stdc++.h>
/*Given two arrays A
 and B
 of size N
. Print a new array C
 that holds the concatenation of array B
 followed by array A
 Note: using vector;
.*/
using namespace std;

int main() {
    int n; cin>>n;
    vector <int> a(n);
    vector <int> b(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        
        cin>>b[i];
    }
    vector <int> c(b);
    c.insert(c.end(),a.begin(),a.end());
    
    for(int v:c)
    {
        cout<<v<<" ";
    }

    return 0;
}