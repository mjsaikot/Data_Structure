#include <bits/stdc++.h>

using namespace std;

int main() {
   int n;
   cin>>n;
   int a[n];
   //time complexity O(N) work here
   for(int i = 0; i < n; i++)
   {
    cin>>a[i];
   }
   int sum = 0;
    //time complexity O(N) work here

   for (int i = 0; i < n; i++)
   {
     sum+=a[i];
   }
   cout<<sum<<" "<<endl;
   
   return 0;
}