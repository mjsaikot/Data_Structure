#include <bits/stdc++.h>
using namespace std;
/*You will given an array A of size N. You need to tell if the array is already sorted or not. If the array is sorted in 
ascending order print "YES", otherwise print "NO".First line will contain T, the number of test cases.*/
int main() {
   int t;
   cin>>t;
   while(t--)
   {
       int n; cin>>n;
       int a[n];
       for(int i = 0; i<n; i++)
       {
           cin>>a[i];
       }
       bool flag = true;
       for(int i=0; i<n-1; i++)
       {
           if(a[i]>a[i+1])
           {
               flag = false;
               break;
           }
       }
       if(flag == true) 
       {
           cout<<"YES"<<endl;
       }
       else {cout<<"NO"<<endl;}
   }
   return 0;
}