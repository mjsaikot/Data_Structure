#include <bits/stdc++.h>
/*You need to take a singly linked list of integer value as input.
Then you need to print the singly linked list in reverse order,
after that print the original linked list also.*/
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
void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void print_reverse(Node *rev)
{
    // base-case;
    if (rev == NULL)
        return;
    print_reverse(rev->next);
    cout << rev->val << " ";
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        /* code */
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }
    print_reverse(head);
    cout << endl;
    print_linked_list(head);

    return 0;
}