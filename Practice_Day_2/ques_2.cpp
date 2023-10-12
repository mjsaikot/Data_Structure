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
void dup_val(Node *head)
{
    Node *tmp = head;
    vector<int> v(tmp->val);
    while (tmp != NULL)
    {
        /* code */
        cout << v << " ";
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
    dup_val(head);

    return 0;
}