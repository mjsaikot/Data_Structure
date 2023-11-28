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
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}
void insertLinkedList(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        insertAtHead(head, tail, val);
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
void insertAtPos(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = tmp;
}
void insertAtTail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}
void deleteHead(Node *&head)
{
    Node *deleteHead = head;
    if (head == NULL)
    {
        cout << "No Data for delete" << endl;
        return;
    }
    head = head->next;
    delete deleteHead;
    head->prev = NULL;
}
void deleteAnyPos(Node *head, int pos)
{
    Node *tmp = head;
    if (head == NULL)
    {
        cout << "No data for delete" << endl;
        return;
    }
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    Node *deleteNode = tmp;
    tmp->next = tmp->next->next;
    tmp->next->prev = tmp;
    delete deleteNode;
}
void deleteTail(Node *&tail)
{
    Node *deleteTail = tail;
    tail = tail->prev;
    delete deleteTail;
    tail->next = NULL;
}
void printNormal(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void printReverse(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
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
    Node *head = NULL;
    Node *tail = NULL;
    int val, pos, op;
    while (true)
    {
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
            insertLinkedList(head, tail, val);
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
                insertAtPos(head, pos, val);
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
            if (pos == 0)
            {
                deleteHead(head);
            }
            else if (pos == size(head))
            {
                deleteTail(tail);
            }
            else if (pos >= size(head))
            {
                cout << "Invalid Position" << endl;
            }
            else
            {
                deleteAnyPos(head, pos);
            }
        }
        else if (op == 6)
        {
            break;
        }
    }
    return 0;
}