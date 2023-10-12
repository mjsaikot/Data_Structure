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
void insert_at_tail(Node* &head, int val)
{
    Node *newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        cout << "Inserted at head." << endl;
        return;
    }
    Node *tmp = head;
    while(tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
    cout << " Inserted at Tail." << endl;
    cout << endl;
}
void print_linked_list(Node* head)
{
    Node *fast = head;
    Node *slow = head;
    Node *prev = NULL;
    while(fast != NULL && fast->next != NULL)
    {
        cout << fast->val << " ";
        fast = fast->next->next;
        cout << endl;
        cout << slow->val << " ";
        prev = slow;
        slow = slow->next;
        
    } 
}
bool dup_val(Node* head)
{
    // Node *head;
    Node *fast = head;
    Node *slow = head;
    Node *prev = NULL;
    while(fast != NULL && fast->next != NULL)
    {
        if(fast->val != slow->val)
        {
            return true;
        }
        fast = fast->next->next;
        prev = slow;
        slow = slow->next;
        
    }
    
    return false;
}
int main() {
    Node *head = NULL;
    int val;
    while(true)
    {
        cout << "Enter your value for add: ";
        cin >> val;
        if(val == -1)
        {
            break;
        }
        insert_at_tail(head, val);
    }
    print_linked_list(head);
    // if(dup_val(head) == true)
    // {
    //     cout << "true" << endl;
    // }
    // else
    // {
    //     cout << "false" << endl;
    // }

    return 0;
}