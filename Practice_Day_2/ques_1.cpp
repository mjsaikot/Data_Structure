#include <bits/stdc++.h>
/*Question: Take a singly linked list as input and print the size of the linked list.*/
using namespace std;
class Node
{
    public:
        int val;
        Node* next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if(head == NULL)
    {
        head = newNode;
        return;
    }
    Node *tmp = head;
    while(tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}
int print_linked_list(Node* head)
{
    int count = 0;
    Node *tmp = head;
    while(tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    cout << endl
         << endl;
    return count;
}
int main() {
    Node *head = NULL;
    int v;
    while(true)
    {
        cin >> v;
        if(v == -1) break;
        insert_at_tail(head, v);
    }
    int size = print_linked_list(head);
    cout << size;

    return 0;
}