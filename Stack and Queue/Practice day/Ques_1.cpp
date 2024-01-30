#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

class MyStack
{
public:
    Node *head;
    Node *tail;
    int sz;

    MyStack()
    {
        head = nullptr;
        tail = nullptr;
        sz = 0;
    }

    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == nullptr)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

    void pop()
    {
        if (sz == 0)
        {
            cout << "Stack Underflow\n";
            return;
        }
        sz--;
        Node *deleteNode = tail;
        tail = tail->prev;
        if (tail == nullptr)
        {
            head = nullptr;
        }
        else
        {
            tail->next = nullptr;
        }
        delete deleteNode;
    }

    int top()
    {
        if (sz == 0)
        {
            cout << "Stack is empty\n";
            return -1; // Return some invalid value indicating error
        }
        return tail->val;
    }

    int size()
    {
        return sz;
    }

    bool empty()
    {
        return sz == 0;
    }
};

int main()
{
    MyStack st, st1;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        st1.push(x);
    }

    int flag = 1;

    if (n != m)
    {
        flag = 0;
    }
    else
    {
        while (!st.empty() && !st1.empty())
        {
            if (st.top() != st1.top())
            {
                flag = 0;
                break;
            }
            st.pop();
            st1.pop();
        }
    }

    if (flag == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
