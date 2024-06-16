#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

Node *insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;

    return head;
}

Node *insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = tail->next;

    return tail;
}

void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *n1 = new Node(12);

    Node *head = n1;
    Node *tail = n1;

    cout << head->data << endl;

    insertAtTail(tail, 67);
    insertAtTail(tail, 89);
    insertAtTail(tail, 90);
    insertAtTail(tail, 76);
    print(head);
    return 0;
}