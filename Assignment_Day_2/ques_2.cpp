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
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
}

int main()
{
    Node *head_1 = nullptr;
    Node *tail_1 = nullptr;
    Node *head_2 = nullptr;
    Node *tail_2 = nullptr;
    int val;

    return 0;
}