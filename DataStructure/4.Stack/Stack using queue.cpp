//Enqueue costly
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

class Stack
{
    queue<int> q1, q2;

public:
    void push(int x);
    void pop();
    int top();
};

void Stack::push(int x)
{
    q2.push(x);
    while (!q1.empty())
    {
        q2.push(q1.front());
        q1.pop();
    }

    queue<int> q = q1;
    q1 = q2;
    q2 = q;
}

void Stack::pop()
{
    if (q1.empty())
    {
        cout << "Stack is empty" << endl;
        return;
    }
    else
    {
        q1.pop();
    }
}

int Stack::top()
{
    if (q1.empty())
        return -1;
    return q1.front();
}

int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);

    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    return 0;
}