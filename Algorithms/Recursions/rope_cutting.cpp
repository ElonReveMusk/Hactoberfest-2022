//Time Complexity - O(3^n)

#include<bits/stdc++.h>
using namespace std;

int maximum(int a, int b, int c)
{
    return max(a, max(b,c));
}

int rope_cut(int length_rope, int len1, int len2, int len3)
{
    if(length_rope==0)
    return 0;
    else if(length_rope<0)
    return -1;

    int res;
    res = maximum(rope_cut(length_rope-len1, len1, len2, len3), rope_cut(length_rope-len2, len1, len2, len3), rope_cut(length_rope-len3, len1, len2, len3));

    if(res==-1)
    return -1;

    return res+1;
}

int main()
{
    cout<<"\nEnter the Original Size of the rope : ";
    int rope_size, size1, size2, size3;
    cin>>rope_size;
    cout<<"\nEnter the three given sizes : ";
    cin>>size1>>size2>>size3;
    int result = rope_cut(rope_size, size1, size2, size3);
    cout<<"\nThe max cuts possible are : "<<result<<endl;
    cout<<"\n";
}