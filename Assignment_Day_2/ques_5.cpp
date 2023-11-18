#include <bits/stdc++.h>
/*You have a singly linked list which is empty initially. Then you will be given Q queries.
In each query you will be given two values X and V.*/
using namespace std;
class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_head(Node *&head, Node *&tail, int val)
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
        head = newNode;
    }
}
void insert_at_tail(Node *&head, Node *&tail, int val)
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
        tail->next = newNode;
        tail = newNode;
    }
}
void printHeadTail(Node *head, Node *tail)
{
    if (head == NULL)
    {
        cout << "Please enter linked list first";
    }
    else
    {
        cout << head->val << " " << tail->val << endl;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x >> val;
        if (x == 0)
        {
            insert_at_head(head, tail, val);
        }
        else if (x == 1)
        {
            insert_at_tail(head, tail, val);
        }
        printHeadTail(head, tail);
    }

    return 0;
}