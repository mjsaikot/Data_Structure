#include <bits/stdc++.h>

using namespace std;
class myStackList
{
public:
    list<int> myList;
    void push(int val)
    {
        myList.push_back(val);
    }
    void pop()
    {
        myList.pop_back();
    }
    int top()
    {
        return myList.back();
    }
    int size()
    {
        return myList.size();
    }
    bool empty()
    {
        if (myList.size() == 0)
            return true;
        else
            return false;
    }
};
int main()
{
    myStackList stl;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        stl.push(x);
    }
    while (!stl.empty())
    {
        cout << stl.top() << " ";
        stl.pop();
    }
    cout << endl;

    return 0;
}