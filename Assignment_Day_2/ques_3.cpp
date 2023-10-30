#include <bits/stdc++.h>
/*You need to take a singly linked list of integer value as input.
Then you need to sort the linked list in descending order and print the middle element of it.
If there are multiple values in the middle, print both.*/
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
void print_middle(Node *head)
{
    if (head == NULL)
    {
        cout << "Head is empty" << endl;
        return;
    }
    Node *fast = head;
    Node *slow = head;
    Node *prev = NULL;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        prev = slow;
        slow = slow->next;
    }

    if (fast == NULL)
    {
        if (prev->val < slow->val)
        {
            swap(prev->val, slow->val);
        }
        cout << prev->val << " " << slow->val << endl;
    }
    else
    {
        cout << slow->val << endl;
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
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val > j->val)
            {
                swap(i->val, j->val);
            }
        }
    }
    print_middle(head);

    return 0;
}