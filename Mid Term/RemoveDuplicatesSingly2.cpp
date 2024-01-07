#include <bits/stdc++.h>
/*You need to take a linked list of integer value as input using STL List.
You need to remove the duplicate values and print the unique values in ascending order.*/
using namespace std;

int main()
{
    int val;
    list<int> myList(val);
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        else
        {
            myList.push_back(val);
        }
    }
    myList.sort();
    myList.unique();
    for (int v : myList)
    {
        cout << v << " ";
    }
    cout << endl;

    return 0;
}