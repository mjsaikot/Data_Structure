#include <bits/stdc++.h>

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
        this->next = NULL;
        this->prev = NULL;
    }
};
class myStackList
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    void push(int val)
    {
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
        Node *deleteNode = tail;
        tail = tail->prev;
        if (tail == nullptr)
            head = nullptr;
        delete deleteNode;
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
    return 0;
}