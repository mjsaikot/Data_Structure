#include <bits/stdc++.h>
/*Question: Take a singly linked list as input and check if the linked list contains any duplicate value. 
You can assume that the maximum value will be 100.*/
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
bool dup_val(Node* head)
{
    Node *tmp = head;
    unordered_set<int> dup;
    
    while(tmp != NULL)
    {
        if(dup.find(tmp->val) != dup.end())
        {
            return true;
        }
        dup.insert(tmp->val);
        tmp = tmp->next;
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
    if(dup_val(head) == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}