#include <bits/stdc++.h>
/*Question: Take a singly linked list as input, then take q queries. In each query you will be given an index and value. 
You need to insert those values in the given index and print the linked list. If the index is invalid print “Invalid”.
*/
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
void insert_at_tail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        cout << "Inserted at Head." << endl;
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
void insert_at_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
    cout << "Inserted at Head" << endl;
}
void print_linked_list(Node * head)
{
    Node *tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
        
    }
    cout << endl;
}
void insert_any_pos(Node* head, int pos, int val, int q)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
        if(tmp == NULL)
        {
            cout << "Invalid!" << endl;
            return;
        }
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    print_linked_list(head);    
}
int main() {
    Node *head = NULL;
    int val;
    while(true)
    {
        int op;
        cout << "Option 1: Input Linked list" << endl;
        cout << "Option 2: Insert by query" << endl;
        cout << "Option 3: Print Linked List" << endl;
        cout << "Enter an option here: ";
        cin >> op;
        if(op == 1)
        {
            while(true)
            {
                int v;
                cout << "Enter your value: ";
                cin >> v;
                if(v == -1)
                    break;
                insert_at_tail(head, v);
            }
        }
        else if(op == 2)
        {
            int q;
            cout << "Insert your query: ";
            cin >> q;
            while(q--)
            {
                int pos, val;
                cout << "Insert position and value here: ";
                cin >> pos >> val;
                if(pos == 0)
                {
                    insert_at_head(head, val);
                }
                else{
                insert_any_pos(head, pos, val, q);
                }
            }
        }
        else if(op == 3)
        {
            print_linked_list(head);
        }
    }
    return 0;
}