//Program to find a peak element in a vector array

#include<bits/stdc++.h>
using namespace std;

int findPeakElement(vector<int>& nums) {
        int pmx = 0;
        int rt = nums.size();
  
        for(int i=0;i<rt;i++){
            if(nums[i]>nums[pmx]) pmx = i;
        }
        return pmx;
    }
    
    
int main(){
  vector<int> v;
  int n;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin>>x;
        v.push_back(x); //here complexity is O(1).
    }
  
  cout<<findPeakElement(v)<<endl;
  return 0;
}
