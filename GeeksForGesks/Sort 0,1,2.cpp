// Given an array 'arr' having elements as 0,1 or 2 only.
// The task is to sort this array.

//Example 1:
//
//Input:
// n = 6 
//arr[] = {0,1,2,1,0}

//Output: 
//arr[] = {0,0,1,1,2}

//Example 2:
//
//Input:
// n = 5
//arr[] = {2,1,1,1,2}

//Output: 
//arr[] = {1,1,1,2,2}


#include <bits/stdc++.h>
using namespace std;

void sortArray(vector<int> &arr, int n)
{
    int low = 0, high = n - 1, mid = 0;

    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }

        else if (arr[mid] == 1)
        {
            mid++;
        }

        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main()
{
    // Size of array
    int n;

    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Function to sort the array
    sortArray(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}