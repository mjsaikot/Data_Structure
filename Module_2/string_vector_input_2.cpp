#include <bits/stdc++.h>

using namespace std;
//take input with spaces using getline;;
int main() {
   int n; cin>>n;
   cin.ignore();
   vector<string> v(n);
   for(int i=0;i<n;i++)
   {
    getline(cin,v[i]);
   }
   for (string s:v)
   {
    cout<<s;
   }
   
   return 0;
}