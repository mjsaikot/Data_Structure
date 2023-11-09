#include <bits/stdc++.h>

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
void insert_at_tail(Node *head, Node *tail, int val)
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
int findSmall(Node *head)
{
    int min = INT_MAX;
    while (head != NULL)
    {
        if (min > head->val)
        {
            min = head->val;
        }
        head = head->next;
    }
    return min;
}
int findLarge(Node *head)
{
    int max = INT_MIN;
    while (head != NULL)
    {
        if (max < head->val)
        {
            max = head->val;
        }
        head = head->next;
    }
    return max;
}
// void printMaxMin(Node *&head)
// {
//     int *min = findSmall(head);
//     int *max = findLarge(head);
// }
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
        insert_at_tail(head, tail, val);
    }
    cout << findSmall(head) << " " << findLarge(head) << endl;

    return 0;
}