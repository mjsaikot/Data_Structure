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
void insert_at_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
    cout << "Inserted at head" << endl;
    
}
void insert_at_tail(Node* &head,int v)
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
    newNode->next = tmp->next;
    tmp->next = newNode;
}
void delete_node(Node* head, int pos)
{
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}
int main()
{
    Node *head = NULL;
    while(true)
    {
        int op;
        cout << "Option 1: Insert at Head." << endl;
		cout << "Option 2: Insert at any position." << endl;
		cout << "Option 3: Insert at Tail." << endl;
		cout << "Option 4: Print the linked list." << endl;
		cout << "Option 5: Delete a Node." << endl;
		cout << "Option 6: Terminate Program." << endl;
        cout << endl;
        cout << "Enter an option here: ";
        cin >> op;
        if(op == 1)
        {
            int val;
            cout << "Enter Your value: ";
            cin >> val;
            insert_at_head(head, val);
        }
        else if(op == 2)
        {
            int pos, val;
            cout << "Enter your position: ";
            cin >> pos;
            cout << "Enter your value: ";
            cin >> val;
            if(pos == 0)
            {
                insert_at_head(head, val);
            }
            else{
                insert_any_pos(head, pos, val);
                cout << "Inserted " << val << " at " << pos << " no. position." << endl;
            }
        }
        else if(op == 3)
        {
            int v;
            cout << "Enter value: ";
            cin >> v;
            insert_at_tail(head, v);
        }
        else if(op = 4)
        {
            cout << endl;
            cout << "Your Linked list is: ";
            print_linked_list(head);
        }
        else if(op == 5)
        {
            int pos;
            cout << "Enter Position for delete Node: ";
            cin >> pos;
            delete_node(head, pos);
            cout << "Node Deleted" << endl;
        }
        else
        {
            // terminate program;
            break;
        }
    }

    return 0;
}