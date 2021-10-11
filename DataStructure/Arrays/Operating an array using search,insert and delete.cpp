#include<bits/stdc++.h>
using namespace std;
bool searchEle(int a[], int x);
bool insertEle(int a[], int y, int yi);
bool deleteEle(int a[], int z);
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[10000];
        memset(a, -1, sizeof(a));
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int x, y, yi, z;
        cin >> x >> y >> yi >> z;
        bool b = searchEle(a, x);
        if (b == true)
            cout << "1";
        else
            cout << "0";
        b = insertEle(a, y, yi);
        if (b)
        {
            if (a[yi] == y)
                cout << "1";
            else
                cout << "0";
        }
        else
            cout << "0";
        b = deleteEle(a, z);
        if (b)
        {
            if (!searchEle(a, z))
                cout << "1\n";
            else
                cout << "0\n";
        }
        else
            cout << "0\n";
    }
}
bool searchEle(int a[], int x)
{
    int i = 0;
    while (a[i] != -1)
        if (a[i++] == x) return true;
    return false;
}
bool insertEle(int a[], int y, int yi)
{
    int i = 0;
    while (a[i] != -1)
        if (i++ == yi) { a[i - 1] = y; return true; }
    return false;
}
bool deleteEle(int a[], int z)
{
    int i = 0;
    while (a[i] != -1)
        if (a[i++] == z) { a[i - 1] = -1; }
    return true;
}