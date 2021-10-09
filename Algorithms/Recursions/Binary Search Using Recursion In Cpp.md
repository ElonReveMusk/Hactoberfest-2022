# Binary Search (Recursive)


#### Given an integer sorted array (sorted in increasing order) and an element x, find the x in given array using binary search. Return the index of x.

##### Return -1 if x is not present in the given array.

##### Note : If given array size is even, take first mid.

`Input format :`

`Line 1 : Array size`

`Line 2 : Array elements (separated by space)`

`Line 3 : x (element to be searched)`

##### Sample Input :

```
6
2 3 4 5 6 8 
5 

```

##### Sample Output:

```
3 
```

## SOLUTION:

    #include <iostream>
    using namespace std;
    // input - input array
    // size - length of input array
    // element - value to be searched
    int binarySearchPerform(int input[], int start, int end , int x , int mid){
        if(input[mid] == x){
            return mid;
        }
        if(start >= end){
            return -1;
        }
       
        if(input[mid] < x){
           //  start = mid+1;
            int rightMid = ( (mid+1) + end)/2;
            return binarySearchPerform(input, mid+1 , end, x, rightMid);
        }else{
            // end = mid -1;
            int leftMid = ( start + (mid - 1))/2;
            return binarySearchPerform(input, start, mid-1,x, leftMid);
        }
        
    }
    int binarySearch(int input[], int size, int element) {
        // Write your code here
        int mid = (0 + size)/2;
        return binarySearchPerform(input, 0 , size-1, element , mid);
    }
    
    int main() {
        int input[100000],length,element, ans;
        cin >> length;
        for(int i =0;i<length;i++)
        { 
            cin >> input[i];;
        }
    
        cin>>element;
        ans = binarySearch(input, length, element);
        cout<< ans << endl;
    }
