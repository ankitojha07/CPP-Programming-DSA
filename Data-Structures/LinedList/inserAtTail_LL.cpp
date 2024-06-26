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
    int data = 12;
    node *n = new node(data);

    node *head = n;
    node *tail = n;

    insertAtTail(tail, 34);
    insertAtTail(tail, 76);
    insertAtTail(tail, 89);
    print(head);

    return 0;
}