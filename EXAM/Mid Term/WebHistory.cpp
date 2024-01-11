#include <iostream>
#include <list>
#include <iterator>
#include <string>
/*You are given a doubly linked list of unique string values. These strings refer to web addresses without any spaces.
You will be given Q queries.
In each query you will be given some commands. Type of commands are -
visit address - You need to go to that address from where you are in that list and print that address if it is in the list.
Otherwise print "Not Available".
next - You need to go to the next address from where you are in that list and print that address if it is in the list.
Otherwise print "Not Available".
prev - You need to go to the previous address from where you are in that list and print that address if it is in the list.
Otherwise print "Not Available".
One more thing, if the address isn't available make sure you don't move from your current position.
You are at the head initially.*/
class Node
{
public:
    std::string data;
    Node *next;
    Node *prev;

    Node(const std::string &val) : data(val), next(nullptr), prev(nullptr) {}
};

class WebNavigator
{
private:
    Node *head;
    Node *current;

public:
    WebNavigator() : head(nullptr), current(nullptr) {}

    // Function to insert a new node at the end of the doubly linked list
    void insert(const std::string &address)
    {
        Node *newNode = new Node(address);
        if (head == nullptr)
        {
            head = current = newNode;
        }
        else
        {
            newNode->prev = current;
            current->next = newNode;
            current = newNode;
        }
    }

    // Function to navigate to the specified address
    void visit(const std::string &address)
    {
        Node *temp = head;
        while (temp != nullptr && temp->data != address)
        {
            temp = temp->next;
        }

        if (temp != nullptr)
        {
            current = temp;
            std::cout << current->data << std::endl;
        }
        else
        {
            std::cout << "Not Available" << std::endl;
        }
    }

    // Function to navigate to the next address
    void next()
    {
        if (current != nullptr && current->next != nullptr)
        {
            current = current->next;
            std::cout << current->data << std::endl;
        }
        else
        {
            std::cout << "Not Available" << std::endl;
        }
    }

    // Function to navigate to the previous address
    void prev()
    {
        if (current != nullptr && current->prev != nullptr)
        {
            current = current->prev;
            std::cout << current->data << std::endl;
        }
        else
        {
            std::cout << "Not Available" << std::endl;
        }
    }
};

int main()
{
    WebNavigator navigator;

    // Input the doubly linked list
    std::string address;
    while (std::cin >> address && address != "end")
    {
        navigator.insert(address);
    }

    int Q;
    std::cin >> Q;

    // Process queries
    std::string command, argument;
    std::cin >> command >> argument;

    navigator.visit(argument); // The first command is always "visit address"

    for (int i = 1; i < Q; ++i)
    {
        std::cin >> command;

        if (command == "visit")
        {
            std::cin >> argument;
            navigator.visit(argument);
        }
        else if (command == "next")
        {
            navigator.next();
        }
        else if (command == "prev")
        {
            navigator.prev();
        }
    }

    return 0;
}
