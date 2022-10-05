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

void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp->next = head;
    head=temp;
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
    cout<< n1->data<<endl;

    insertAtHead(n1,12);
    printLL(n1);
    return 0;
}
