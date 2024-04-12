#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};


// insertion operations 

// insert at head
void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp->next = head;
    head=temp;
}

// insert at tail 
void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail ->next = temp;
    tail = temp;
}

void printLL(Node* &head){
    Node* temp = head;
    cout<<"Printing Linked List : "<< endl;

    while (temp!=NULL)
    {
        cout<< temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
    
}


int main(int argc, char const *argv[])
{
    Node* n1 = new Node(10);
    Node* head = n1;
    Node* tail = n1;

    cout<< n1->data<<endl;

    // insert at head call 
    insertAtHead(head, 19);
    printLL(n1);

    // insert at tail call : 
    insertAtTail(tail,13);
    printLL(n1);
    insertAtTail(tail,15);
    printLL(n1);
    return 0;
}
