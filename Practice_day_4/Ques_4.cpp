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
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    else
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}
void insertAtTail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->prev = tail;
    tail->next = newNode;
    tail = newNode;
}
void insertAtPos(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = tmp;
}
void printNormal(Node *head)
{
    Node *tmp = head;
    while (tmp != nullptr)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void print_reverse(Node *tail)
{
    Node *tmp = tail;
    while (tmp != nullptr)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}
int size(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
    }
    return cnt;
}
int main()
{
    Node *head = nullptr;
    Node *tail = nullptr;
    int val, q, pos;
    cin >> q;
    while (q--)
    {
        cin >> pos >> val;
        if (pos == 0)
        {
            insertAtHead(head, tail, val);
        }
        else if (pos == size(head))
        {
            insertAtTail(head, tail, val);
        }
        else if (pos >= size(head))
        {
            cout << "Invalid" << endl;
        }
        else
        {
            insertAtPos(head, val, pos);
        }
        printNormal(head);
        print_reverse(tail);
    }
    return 0;
}