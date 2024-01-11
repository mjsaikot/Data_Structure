#include <bits/stdc++.h>
/*You have a doubly linked list which is empty initially. Then you will be given Q queries.
In each query you will be given two values X and V.*/
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
    else
    {
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
}

void insertAtPos(Node *&head, Node *&tail, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    int sz = 0;
    while (tmp != nullptr && sz < pos - 1)
    {
        tmp = tmp->next;
        sz++;
    }

    if (tmp == nullptr)
    {
        // Invalid position
        cout << "Invalid" << endl;
        delete newNode;
        return;
    }

    newNode->next = tmp->next;
    tmp->next = newNode;
    if (newNode->next != nullptr)
    {
        newNode->next->prev = newNode;
    }
    else
    {
        tail = newNode;
    }
    newNode->prev = tmp;
}

void printNormal(Node *head)
{
    Node *tmp = head;
    if (head == NULL)
    {
        return;
    }
    cout << "L -> ";
    while (tmp != nullptr)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_reverse(Node *head, Node *tail)
{
    if (head == NULL)
    {
        return;
    }
    Node *tmp = tail;
    cout << "R -> ";
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
        tmp = tmp->next;
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
        else
        {
            insertAtPos(head, tail, pos, val);
        }
        if (pos <= size(head))
        {
            printNormal(head);
            print_reverse(head, tail);
        }
    }
    return 0;
}
