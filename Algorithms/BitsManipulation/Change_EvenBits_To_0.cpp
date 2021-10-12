// Given a number 'N'. The task is to change all even bits in number to 0.

// Example 1:
//
// Input:
// n = 6

// Output:
// 2
// Explanation
// Binary representation of 6 is 110
// After Making bits at even position 0 -> 010
// 010 in decimal is 2.

// Example 2

// Input:
// n = 10

// Output :
// 10

#include <bits/stdc++.h>
using namespace std;

int convertEvenBits(int n)
{
    return (n & (0xaaaaaaaa));
}

int main()
{
    int n;

    cin >> n;

    int ans = convertEvenBits(n);

    cout << ans << endl;
}