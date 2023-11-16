#include <bits/stdc++.h>
/*Find MAX and MIN in singly linked list*/
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
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void findLarge(Node *head)
{
    Node *tmp = head;
    int max;
    if (head == NULL)
    {
        cout << "Insert value first";
    }
    else
    {
        max = head->val;
        while (tmp != NULL)
        {
            if (max < tmp->val)
            {
                max = tmp->val;
            }
            tmp = tmp->next;
        }
        cout << max;
    }
}
void findSmall(Node *head)
{
    Node *tmp = head;
    int min;
    if (head == NULL)
    {
        cout << "Insert value first";
    }
    else
    {
        min = head->val;
        while (tmp != NULL)
        {
            if (min > tmp->val)
            {
                min = tmp->val;
            }
            tmp = tmp->next;
        }
        cout << " " << min;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }
    findLarge(head);
    findSmall(head);

    return 0;
}