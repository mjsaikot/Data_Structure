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
class linked_list(){
    public :
        void insert_at_tail(Node * &head, int val){
            Node *newNode = new Node(val);
        if (head == NULL)
        {
        head = newNode;
        cout << "Inserted at Head" << endl;
        return;
            }
            Node *tmp = head;
            while(tmp->next != NULL)
            {
                tmp = tmp->next;
            }
            tmp->next = newNode;
            cout << "Inserted at Tail" << endl;
        }
        bool duplicate_value()
        {
            Node *head;
            unordered_set<int> dup;
            Node *tmp = head;
            while (tmp->next != NULL)
            {
                /* code */
                if(dup.find(tmp->val) != dup.end())
                {
                    return true;
                }
                dup.insert(tmp->val);
                tmp = tmp->next;
            }
            return false;
        }
}
;
int main()
{
            linked_list mylist;
            Node *head = NULL;
            int val;
            while (true)
            {
                cout << "Please enter a value: ";
                cin >> val;
                if (val == -1)
                {
                    break;
                }
                insert_at_tail(head, val);
            }
            if(mylist.duplicate_value() ==  true)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }

    return 0;
}