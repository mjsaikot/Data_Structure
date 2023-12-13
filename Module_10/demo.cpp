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
void insertAtHead(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == nullptr)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}
void insertAtTail(Node *&head, Node *&tail, int val)
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
void insertAtPos(Node *&head, Node *&tail, int pos, int val)
{
    if (pos == 0)
    {
        insertAtHead(head, tail, val);
        return;
    }
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    if (tmp == nullptr)
    {
        cout << "Invalid Position" << endl;
        return;
    }
    newNode->next = tmp->next;
    newNode->prev = tmp;
    if (tmp->next != nullptr)
    {
        tmp->next->prev = newNode;
    }
    tmp->next = newNode;
    if (newNode->next == nullptr)
    {
        tail = newNode;
    }
}
void deleteNode(Node *&head, Node *&tail, int pos)
{
    if (head == nullptr || pos < 0)
    {
        cout << "Invalid position or empty list" << endl;
        return;
    }
    Node *tmp = head;
    for (int i = 0; tmp != nullptr && i < pos; i++)
    {
        tmp = tmp->next;
    }
    if (tmp == nullptr)
    {
        cout << "Invalid position" << endl;
        return;
    }
    if (tmp == head)
    {
        head = tmp->next;
    }
    if (tmp == tail)
    {
        tail = tmp->prev;
    }
}
int main()
{
    return 0;
}