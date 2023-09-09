#include <bits/stdc++.h>
/*You will be given an array A of size N. Print "YES" if there is any duplicate value in the array,*/
using namespace std;

int main() {
   int n; cin>>n;
   int a[n];
   for(int i=0; i<n; i++)
   {
    cin>>a[i];
   }
   bool flag = false;
   for(int i = 0; i<n-1; i++)
   {
       for(int j=1;j<n;j++)
       {
           if(a[i] != a[j])
           {
               flag = true;
               break;
           }
       }
       if(flag)
       {
           break;
       }
   }
   if(flag == true) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
   return 0;
}