#include<iostream>
using namespace std;

int peakinmountainarr(int arr[],int n){
    int s = 0;
    int e = n - 1;
    int mid = s + (e-s)/2;
    while (s<e){
        if (arr[mid] < arr[mid+1]){
            s = mid + 1;
        }
        else {
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s; //when s=e it return s
}

int main(){
    int size;
    cout << "Enter the size of an array  ";
    cin >> size;
    int arr[size];
    cout << endl << "Enter the elements of an array ";
    for(int i = 0; i <size;i++){
        cin >> arr[i];
    }
    
    cout << peakinmountainarr(arr,size) << endl;

    return 0;
}