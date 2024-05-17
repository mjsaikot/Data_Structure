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

// Stack implementation
class Stack
{
public:
    Node *top;

    Stack() : top(nullptr) {}

    void push(int value)
    {
        Node *newNode = new Node(value);
        if (top == nullptr)
            top = newNode;
        else
        {
            newNode->next = top;
            top = newNode;
        }
    }

    int pop()
    {
        if (top == nullptr)
        {
            cout << "Stack is empty!\n";
            return -1; // Error value
        }
        int poppedValue = top->val;
        Node *temp = top;
        top = top->next;
        delete temp;
        return poppedValue;
    }

    bool isEmpty()
    {
        return top == nullptr;
    }
};

// Queue implementation
class Queue
{
public:
    Node *front;
    Node *rear;

    Queue() : front(nullptr), rear(nullptr) {}

    void enqueue(int value)
    {
        Node *newNode = new Node(value);
        if (rear == nullptr)
        {
            front = rear = newNode;
        }
        else
        {
            rear->next = newNode;
            rear = newNode;
        }
    }

    int dequeue()
    {
        if (front == nullptr)
        {
            cout << "Queue is empty!\n";
            return -1; // Error value
        }
        int dequeuedValue = front->val;
        Node *temp = front;
        if (front == rear)
        {
            front = rear = nullptr;
        }
        else
        {
            front = front->next;
        }
        delete temp;
        return dequeuedValue;
    }

    bool isEmpty()
    {
        return front == nullptr;
    }
};

// Function to check if both lists end up the same after removing elements
bool areListsEqual(Stack &stack, Queue &queue)
{
    // Removing and comparing elements
    while (!stack.isEmpty() && !queue.isEmpty())
    {
        if (stack.pop() != queue.dequeue())
            return false;
    }

    // If both stack and queue are empty, lists are equal
    return stack.isEmpty() && queue.isEmpty();
}

int main()
{
    // Example usage
    Stack stack;
    Queue queue;

    int n, m;
    cin >> n >> m;

    // Input values into stack
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        stack.push(value);
    }

    // Input values into queue
    for (int i = 0; i < m; i++)
    {
        int value;
        cin >> value;
        queue.enqueue(value);
    }

    if (areListsEqual(stack, queue))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
