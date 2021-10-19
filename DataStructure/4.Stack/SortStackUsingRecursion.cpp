#include <bits/stdc++.h>
using namespace std;

stack<int> s;

void sortInsert(int x)
{
    if (s.size() == 0 || x > s.top())
        s.push(x);
    else
    {
        int a = s.top();
        s.pop();
        sortInsert(x);
        s.push(a);
    }
}

void sorted()
{
    if (s.size() > 0)
    {
        int x = s.top();
        s.pop();
        sorted();
        sortInsert(x);
    }
}

int main()
{
    s.push(41);
    s.push(3);
    s.push(32);
    s.push(2);
    s.push(11);

    sorted();

    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }

    return 0;
}