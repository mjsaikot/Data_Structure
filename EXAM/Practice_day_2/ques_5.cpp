#include <bits/stdc++.h>
/*Question: Take a singly linked list as input and check if the linked list is sorted in ascending order.
 */
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
bool print_linked_list()
{
    Node *head;
    Node *tmp = head;
    while (tmp != NULL && tmp->next != NULL)
    {
        if (tmp->val > tmp->next->val)
        {
            return false;
        }
        tmp = tmp->next;
    }
    cout << endl;
    return true;
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
    if (print_linked_list() == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
