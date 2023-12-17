#include <bits/stdc++.h>

using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insertAtHead(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == nullptr)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}
void insertAtTail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == nullptr)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
void insertAtPos(Node *&head, Node *&tail, int pos, int val)
{
    if (pos == 0)
    {
        insertAtHead(head, tail, val);
        return;
    }
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    if (tmp == nullptr)
    {
        cout << "Invalid Position" << endl;
        return;
    }
    newNode->next = tmp->next;
    newNode->prev = tmp;
    if (tmp->next != nullptr)
    {
        tmp->next->prev = newNode;
    }
    tmp->next = newNode;
    if (newNode->next == nullptr)
    {
        tail = newNode;
    }
}
void deleteNode(Node *&head, Node *&tail, int pos)
{
    if (head == nullptr || pos < 0)
    {
        cout << "Invalid position or empty list" << endl;
        return;
    }
    Node *tmp = head;
    for (int i = 0; tmp != nullptr && i < pos; i++)
    {
        tmp = tmp->next;
    }
    if (tmp == nullptr)
    {
        cout << "Invalid position" << endl;
        return;
    }
    if (tmp == head)
    {
        head = tmp->next;
    }
    if (tmp == tail)
    {
        tail = tmp->prev;
    }
    if (tmp->prev != nullptr)
    {
        tmp->prev->next = tmp->next;
    }
    if (tmp->next != NULL)
    {
        tmp->next->prev = tmp->prev;
    }
    delete tmp;
}
void printNormal(Node *head)
{
    Node *tmp = head;
    while (tmp != nullptr)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void printReverse(Node *tail)
{
    Node *tmp = tail;
    while (tmp != nullptr)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}
int size(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
int main()
{
    Node *head = nullptr;
    Node *tail = nullptr;
    int op, pos, val;
    while (true)
    {
        cout << "Menu: " << endl;
        cout << "Option 1: Insert Linked List" << endl;
        cout << "Option 2: Insert at any position." << endl;
        cout << "Option 3: Print the linked list." << endl;
        cout << "Option 4: Print the Reverse list." << endl;
        cout << "Option 5: Delete a Node." << endl;
        cout << "Option 6: Terminate Program." << endl;
        cout << endl;
        cout << "Enter an option here: ";
        cin >> op;
        if (op == 1)
        {
            cout << "Enter value: ";
            cin >> val;
            insertAtTail(head, tail, val);
        }
        else if (op == 2)
        {
            cout << "Enter Position: ";
            cin >> pos;
            cout << "Enter value: ";
            cin >> val;
            if (pos == 0)
            {
                insertAtHead(head, tail, val);
            }
            else if (pos == size(head))
            {
                insertAtTail(head, tail, val);
            }
            else if (pos >= size(head))
            {
                cout << "Invalid position";
            }
            else
            {
                insertAtPos(head, tail, pos, val);
            }
        }
        else if (op == 3)
        {
            printNormal(head);
        }
        else if (op == 4)
        {
            printReverse(tail);
        }
        else if (op == 5)
        {
            cout << "Enter position: ";
            cin >> pos;
            if (pos >= size(head))
            {
                cout << "Invalid Position" << endl;
            }
            else
            {
                deleteNode(head, tail, pos);
            }
        }
        else if (op == 6)
        {
            break;
        }
    }
    return 0;
}
