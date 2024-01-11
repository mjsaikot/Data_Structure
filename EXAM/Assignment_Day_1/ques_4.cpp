#include <bits/stdc++.h>
/*You will given an integer array A of size N and another array B of size M. 
Also you will be given an index X. You need to insert the whole array B to the index X of array A.*/
using namespace std;

int main() {
    int n;
    cin>>n;
    vector <int> a(n);
    for(int i = 0; i<n; i++)
    {
        cin>>a[i];
    }
    int m;
    cin>>m;
    vector <int> b(m);
    for(int i=0; i<m; i++)
    {
        cin>>b[i];
    }
    int x;
    cin>>x;
    a.insert(a.begin()+x, b.begin(),b.end());
    for(int f:a)
    {
        cout<<f<<" ";
    }
   
   return 0;
}