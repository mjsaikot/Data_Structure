#include <bits/stdc++.h>
/*You will be given an integer array A of size N. You need to print the prefix sum array of the array A in reverse order.*/
using namespace std;

int main() {
   int n; cin>>n;
   long long a[n];
   for(int i=0; i<n; i++)
   {
    cin>>a[i];
   }
   long long pre[n];
   pre[0] = a[0];
   for(int i=1; i<n; i++)
   {
       pre[i] = a[i] + pre[i-1];
   }
   reverse(pre,pre+n);
   for(long long val:pre)
   {
       cout<<val<<" ";
   }
   return 0;
}