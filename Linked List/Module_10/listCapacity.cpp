#include <bits/stdc++.h>

using namespace std;
// here we use Linked list capacity function.
int main()
{
    list<int> myList = {10, 20, 30};
    cout << myList.max_size() << endl;
    cout << myList.size() << endl;
    for (int val : myList)
    {
        cout << val << " ";
    }
    cout << endl;
    myList.resize(2);
    for (int val : myList)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}