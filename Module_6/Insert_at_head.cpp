#include <bits/stdc++.h>

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
int main() {
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
        else{break;}
    }

    return 0;
}