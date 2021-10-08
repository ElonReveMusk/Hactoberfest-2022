#include <bits/stdc++.h>
#include <iostream>
#define MAX 1000
using namespace std;

class Stack
{
    int top;

public:
    int pop();
    bool isEmpty();
    int a[MAX];
    void push(int x);
    int peek();
    Stack() { top = -1; }
};

bool Stack::isEmpty()
{
    if (top < 0)
        return true;
    else
        return false;
}

void Stack::push(int x)
{
    if (top == MAX - 1)
    {
        cout << "Stack Overflow" << endl;
    }
    a[++top] = x;
}

int Stack::pop()
{
    if (top < 0)
    {
        cout << "Stack underflow" << endl;
        return -1;
    }
    int x = a[top];
    top--;
    return x;
}

int Stack::peek()
{
    int x;
    if (top < 0)
    {
        cout << "Stack is empty" << endl;
        return 0;
    }
    else
        x = a[top];
    return x;
}

int main()
{
    class Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << "Popped from stack: " << s.pop();
    cout << "\n";
    cout << "Elements present in stack : ";
    while (!s.isEmpty())
    {
        cout << s.peek() << " ";
        s.pop();
    }
    return 0;
}
