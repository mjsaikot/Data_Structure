#include <bits/stdc++.h>

using namespace std;

int main() {
   int n;
   cin >> n;
   for(int i=0;i<n;i++)  //O_N
   {
       int x = i;
       while(x > 0) //O_log(N);
       {
           int digit =x%10;
           cout<<digit<<" ";
           x/=10;
       }           
       cout<<endl;

   }            //NlogN;;

   return 0;
}