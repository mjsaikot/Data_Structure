#include <bits/stdc++.h>

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
void insert_at_tail(Node* &head, int v)
{
    Node *newNode = new Node(v);
    if(head == NULL)
    {
        head = newNode;
        cout << "Inserted at Head" << endl;
        return;
    }
    Node *tmp = head;
    while(tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
    cout << "Inserted at Tail" << endl;
}
void print_linked_list(Node* head)
{
    Node *tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl
         << endl;
}
void insert_any_pos(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    // Linked with pos-1 with new Node;
    newNode->next = tmp->next;
    tmp->next = newNode;
}
void insert_at_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
    cout << endl
         << "Inerted at head" << endl;
}
int main()
{
    Node *head = NULL;
    while(true)
    {
        int op;
        cout << "Option 1: Insert at tail" << endl;
        cout << "Option 2: Print the linked list" << endl;
        cout << "Option 3: Enter at any position." << endl;
        cout << "Option 4: Terminate Program" << endl;
        cout << "Select an Option for operation: " ;
        cin >> op;
        if(op == 1)
        {
            int v;
            cout<<"Enter your value here: ";
            cin >> v;
            insert_at_tail(head, v);
        }
        else if(op == 2)
        {
            cout << "Your Linked list is: ";
            print_linked_list(head);
            cout << endl
                 << endl;
        }
        else if(op == 3)
        {
            int pos, val;
            cout << "Enter your position here: ";
            cin >> pos;
            cout << "Enter your value: ";
            cin >> val;
            if(pos == 0)
            {
                insert_at_head(head, val);
            }
            else{
                insert_any_pos(head, pos, val);
            }
            
            cout << endl
                 << endl;
            
        }
        else
        {
            break;
        }
    }

    return 0;
}