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
    Node* newNode = new Node(v);
    if(head == NULL)
    {
        newNode = head;
        return;
    }
    Node* tmp = head;
    while(tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}
void print_linked_list(Node* head)
{
    Node* tmp = head;
    cout<<"Your Linked list is: ";
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl<<endl;
}
int main() {
    Node* head = NULL;
    while(true)
    {
        cout<<"Option 1: Enter at tail."<<endl;
        cout<<"Option 2: Enter at any position."<<endl;
        cout<<"Option 3: Print your linked list."<<endl;
        cout<<"Option 4: Terminate your program."<<endl;
        int op; cin>>op;
        if(op == 1)
        {
            int v;
            cout<<"Enter your value: ";
            cin>>v;
            insert_at_tail(head,v);
        }
        else if(op == 2)
        {

        }
        else if(op == 3)
        {
            print_linked_list(head);
        }
        else{
            break;
        }
    }
   
   return 0;
}