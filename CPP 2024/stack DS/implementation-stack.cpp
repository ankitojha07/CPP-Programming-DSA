#include <iostream>
using namespace std;

// creating a stack class
class Stack
{
public:
    int size;
    int top;
    int *s;
};

// Stack Operations

bool isEmpty(Stack *st)
{
    if (st->top == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isFull(Stack *st)
{
    if (st->top == st->size - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// create stack
void createStack(Stack *st)
{
    cout << "Enter Size of Stack : " << endl;
    cin >> st->size;
    st->top = -1;
    st->s = new int(st->size);
}

// display stack
void display(Stack *st)
{
    cout << "Here is your Stack : " << endl;

    for (int i = 0; i < st->size; i++)
    {
        cout << st->s[i] << endl;
    }
}

// push operation in stack
void push(Stack *st, int num)
{
    if (isFull(st))
    {
        cout << "Stack Overflow !" << endl;
    }
    else
    {
        st->top++;
        st->s[st->top] = num;
    }
}

// POP operation

int pop(Stack *st)
{
    int x = -1;
    if (isEmpty(st))
    {
        cout << "Stack Underflow !" << endl;
    }
    else
    {
        x = st->s[st->top];
        st->size--;
    }
    return x;
}

int main()
{
    Stack *st = new Stack;
    createStack(st);

    push(st, 8);
    display(st);

    cout << "Removing last element from Stack :  " << pop(st) << endl;

    display(st);
    return 0;
}