#include <bits/stdc++.h>
/*Question: Take a singly linked list as input and print the middle element.
If there are multiple values in the middle print both.*/
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
}
void find_middle(Node* head)
{
    if(head == NULL)
    {
        cout << "Linked list is empty" << endl;
        return;
    }
    Node *fast = head;
    Node *slow = head;
    Node *prev = NULL;
    while(fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        prev = slow;
        slow = slow->next;
    }
    if(fast == NULL)
    {
        
        cout << "Your Middle Element is: ";
        cout << prev->val << " " << slow->val << endl;
    }
    else{
        cout << "Your Middle Element is: ";
        cout << slow->val << endl;
    }
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
    cout << endl;
    find_middle(head);
    cout << endl;

    return 0;
}