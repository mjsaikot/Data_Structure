#include <bits/stdc++.h>
using namespace std;
/*Given 2 numbers N and Q, an array A of N number and Q number of pairs L, R. For each query Q print a 
single line that contains the summation of all numbers from index L to index R.*/
int main() {
    int n,q; cin>>n>>q;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        l--;
        r--;
        int sum = 0;
        for(int i=l; i<=r; i++)
        {
            sum += a[i];
        }
        cout<<sum<<endl;
    }

    return 0;
}