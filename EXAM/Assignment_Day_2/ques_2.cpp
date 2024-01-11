#include <bits/stdc++.h>
/*You will be given two singly linked list of integer values as input.
You need to check if all the elements of both list are same which means both list are same.
If they are same print "YES" otherwise print "NO".*/
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
Node *insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return newNode;
    }
    tail->next = newNode;
    tail = newNode;
    return head;
}
bool find_same(Node *head1, Node *head2)
{
    while (head1 != nullptr && head2 != nullptr)
    {
        if (head1->val != head2->val)
        {
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }

    return head1 == nullptr && head2 == nullptr;
}

int main()
{
    Node *head_1 = nullptr;
    Node *tail_1 = nullptr;
    Node *head_2 = nullptr;
    Node *tail_2 = nullptr;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        head_1 = insert_at_tail(head_1, tail_1, val);
    }
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        head_2 = insert_at_tail(head_2, tail_2, val);
    }
    if (find_same(head_1, head_2))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}