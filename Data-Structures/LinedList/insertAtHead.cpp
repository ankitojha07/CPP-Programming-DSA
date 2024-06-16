#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

node *insertAtHead(node *&head, int data)
{
    node *temp = new node(data);

    temp->next = head;
    head = temp;

    return head;
}

void print(node *head)
{

    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    node *n1 = new node(1);

    node *head = n1;
    node *tail = n1;

    insertAtHead(head, 98);
    insertAtHead(head, 9);
    insertAtHead(head, 8);
    print(head);
    return 0;
}