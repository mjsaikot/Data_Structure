#include <bits/stdc++.h>

using namespace std;

int main() {
//    vector<int> v;
   vector<int> v(5,10);  // Vector value input;
   vector<int> v2(v);   // Vector Copy;
   int a[6] = {1,2,3,4,5,6};  // Array;
   vector <int> x = (a,a+6);   //array copy to vector;;
   vector <int> y = {3,5,8}; // Vector initialization;;
   for(int i=0; i<v2.size(); i++)
   {
    cout<<v2[i]<<" ";
   }
   cout<<endl;

   cout<<v.size()<<endl;   // vector size output;;
   return 0;
}