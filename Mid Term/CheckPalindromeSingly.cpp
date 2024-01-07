#include <bits/stdc++.h>
/*You need to take a singly linked list of integer value as input.
You need to tell if the singly linked list forms a palindrome or not.*/
using namespace std;
class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insertAtTail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void reverseList(Node *&head, Node *cur)
{
    if (cur->next == nullptr)
    {
        head = cur;
        return;
    }
    reverseList(head, cur->next);
    cur->next->next = cur;
    cur->next = nullptr;
}
bool isPalindrome(Node *head)
{
    Node *newHead = NULL;
    Node *newTail = NULL;
    Node *tmp = head;
    while (tmp != nullptr)
    {
        insertAtTail(newHead, newTail, tmp->val);
        tmp = tmp->next;
    }
    reverseList(newHead, newHead);
    tmp = head;
    Node *tmp2 = newHead;
    while (tmp != nullptr)
    {
        if (tmp->val != tmp2->val)
        {
            return false;
        }
        tmp = tmp->next;
        tmp2 = tmp2->next;
    }
    return true;
}
int main()
{
    Node *head = nullptr;
    Node *tail = nullptr;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insertAtTail(head, tail, val);
    }
    if (isPalindrome(head) == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}