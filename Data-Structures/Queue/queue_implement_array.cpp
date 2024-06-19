#include <iostream>
using namespace std;

class Queue
{
public:
    int *arr;
    int front;
    int rear;
    int size;

    Queue(int size)
    {
        arr = new int[size];
        front = 0;
        rear = 0;
        this->size = size;
    }

    bool isEmpty()
    {
        if (front == rear)
            return true;

        else
            return false;
    }

    bool isFull()
    {
        if (rear == size)
            return true;
        else
            return false;
    }

    void enqueue(int data)
    {
        if (isFull())
            cout << "Queue is already full" << endl;
        else
        {
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue()
    {
        if (isEmpty())
            return -1;
        else
        {
            int ans = arr[front];
            arr[front] = -1;
            front++;
            if (front == rear)
            {
                front = 0;
                rear = 0;
            }
            return ans;
        }
    }

    void printQueue()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Queue q(4);
    // int data = 89;
    q.enqueue(45);
    q.enqueue(763);
    q.enqueue(73);
    q.enqueue(63);
    q.printQueue();

    int rem = q.dequeue();
    cout << "Removed " << rem << " from the queue." << endl;

    cout << endl;

    cout << "printing after removal : " << " ";
    q.printQueue();
    return 0;
}