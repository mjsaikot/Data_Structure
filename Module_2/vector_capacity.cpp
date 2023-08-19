#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v(12,23);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<v.size()<<endl;
    cout<<v.max_size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(10);
    cout<<v.capacity()<<endl;
    //remember: when I use push_back() function it will increase 2 multiply in size;;
    
    //cout<<v.clear()<<endl;
    //cout<<v.empty()<<endl;
    //cout<<v.resize(11,22);

    return 0;
}