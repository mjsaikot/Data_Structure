#include <bits/stdc++.h>

using namespace std;

int main() {
   vector<int> v = {1,2,2,4,4,2,4,5,6,7,2,4,6};
   //replace function;;;
//    replace(v.begin(),v.end(),2,20);
//    for(int x:v)
//    {
//     cout<<x<<" ";
//    }
    auto it = find(v.begin(),v.end(),2);
    if(it == v.end()) cout<<"Not Found";
    else cout<<"Found";
   return 0;
}