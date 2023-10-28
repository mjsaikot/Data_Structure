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

void insert_at_tail(Node *&head, int v)
{
	Node *newNode = new Node(v);
	if (head == NULL)
	{
		head = newNode;
		cout << "Inserted at Head" << endl
			 << endl;
		return;
	}

	Node *tmp = head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}

	// after finish the loop tmp will stay in last node;
	tmp->next = newNode;
	cout << "Inserted at tail" << endl
		 << endl;
}

void print_linked_list(Node *head)
{
	Node *tmp = head;
	while (tmp != NULL)
	{
		cout << tmp->val << " ";
		tmp = tmp->next;
	}

	cout << endl
		 << endl;
}

void insert_at_pos(Node *head, int pos, int v)
{
	Node *newNode = new Node(v);
	Node *tmp = head;
	for (int i = 1; i <= pos - 1; i++)
	{
		tmp = tmp->next;
	}

	newNode->next = tmp->next;
	tmp->next = newNode;
}

int main()
{
	Node *head = NULL;
	while (true)
	{
		cout << "Option 1: Insert at Tail" << endl;
		cout << "Option 2: Print the linked list" << endl;
		cout << "Option 3: Enter at any position." << endl;
		cout << "Option 4: Terminate Program" << endl;
		int op;
		cout << "Enter your option here: ";
		cin >> op;
		if (op == 1)
		{
			int v;
			cout << "Enter your value: ";
			cin >> v;
			insert_at_tail(head, v);
		}
		else if (op == 2)
		{
			cout << "Your Linked list is: ";
			// call print function;
			print_linked_list(head);
		}
		else if (op == 3)
		{
			int pos, val;
			cout << "Enter your position for input: ";
			cin >> pos;
			cout << "Enter your value here: ";
			cin >> val;
			cout << "Yor entered " << val << " for this number " << pos << " postiton." << endl;
			insert_at_pos(head, pos, val);
			cout << endl
				 << endl;
		}
		else
		{
			break;
		}
	}

	return 0;
}