// Given an array 'arr' of size 'N' and an integer 'k'
// Rotate the array by 'k' elements

// Example 1
// Input :
// arr = [2,4,5,6]
// k = 2

// Output :
// arr = [5,6,2,4]

// Example 2
// Input :
// arr = [9,1,2,5,6]
// k = 3

// Output :
// arr = [5,6,9,1,2]

void reverse(int arr[], int left, int right)
{
    while (left < right)
    {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
}

void rotateArray(int arr[], int n, int k)
{
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);
    reverse(arr, 0, n - 1);
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    rotateArray(arr, n, k);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}