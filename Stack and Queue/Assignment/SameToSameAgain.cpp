#include <bits/stdc++.h>
using namespace std;

bool areListsEqual(vector<int> &stackValues, vector<int> &queueValues)
{
    stack<int> stack;
    queue<int> queue;

    // Pushing values into stack
    for (int value : stackValues)
        stack.push(value);

    // Pushing values into queue
    for (int value : queueValues)
        queue.push(value);

    // Removing and comparing elements
    while (!stack.empty() && !queue.empty())
    {
        if (stack.top() != queue.front())
            return false;
        stack.pop();
        queue.pop();
    }

    // If both stack and queue are empty, lists are equal
    return stack.empty() && queue.empty();
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> stackValues(n);
    vector<int> queueValues(m);

    // Input values into stack
    for (int i = 0; i < n; ++i)
        cin >> stackValues[i];

    // Input values into queue
    for (int i = 0; i < m; ++i)
        cin >> queueValues[i];

    if (areListsEqual(stackValues, queueValues))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
