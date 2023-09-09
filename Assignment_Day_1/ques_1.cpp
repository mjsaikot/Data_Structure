#include <bits/stdc++.h>

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