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

node *insertAtTail(node *&tail, int data)
{
    node *temp = new node(data);
    tail->next = temp;
    tail = temp;

    return tail;
}

node *insertAtHead(node *head, int data)
{
    node *temp = new node(data);
    temp->next = head;
    head = temp;

    return head;
}

void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    int data = 12;
    node *n = new node(data);

    node *head = n;
    node *tail = n;

    node *inserted = insertAtTail(tail, 34);
    node *headInsertion = insertAtHead(head, 88);

    print(head);
    cout << headInsertion->data << endl;
    return 0;
}