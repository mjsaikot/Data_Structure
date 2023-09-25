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
void insert_at_tail(Node* head, int v)
{
    Node* newNode =new Node(v);
    if(head == NULL)
    {
        head = newNode;
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
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout<<tmp->val<<":";
        tmp = tmp->next;
    }
}

int main() {
    Node* head = NULL;
    cout<<"Option 1: Insert at Tail"<<endl;
    int op;
    cin>>op;
    if(op == 1)
    {
        int v;
        cin>>v;
        insert_at_tail(head,v);
    }
   
   return 0;
}