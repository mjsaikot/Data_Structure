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
    Node* newNode =new Node(v);
    if(head == NULL)
    {
        head = newNode;
        return;
    }

    Node* tmp = head;
    while(tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    //after finish the loop tmp will stay in last node;
    tmp->next = newNode;
}
void print_linked_list(Node* head)
{
    cout<<"Your Linked List is: ";
    Node* tmp = head;
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
        cout<<"Option 1: Insert at Tail"<<endl;
        cout<<"Option 2: Print the linked list"<<endl;
        cout<<"Option 3: Terminate Program"<<endl;
        int op;
        cin>>op;
        if(op == 1)
        {
            int v;
            cout<<"Enter your value: ";
            cin>>v;
            insert_at_tail(head,v);
        }
        else if(op == 2)
        {
            cout<<"Your Linked list is: ";
            //call print function;
            print_linked_list(head);
        }
        else{
            break;
        }
        
    }   
   return 0;
}
