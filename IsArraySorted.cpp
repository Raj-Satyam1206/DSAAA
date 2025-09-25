/* 
Given an array nums, return true if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return false.

There may be duplicates in the original array.

Input: nums = [3,4,5,1,2]
Output: true
Explanation: [1,2,3,4,5] is the original sorted array.
You can rotate the array by x = 2 positions to begin on the element of value 3: [3,4,5,1,2].
*/

#include<bits/stdc++.h>
using namespace std;


bool check(vector<int>& nums) {
    int count=0;
    int n=nums.size();
    for(int i=0; i<n-1; i++)
    {
        if(nums[i]>nums[i+1])
            count++;
    }
    
    if(nums[n-1]>nums[0])
        count++;
    
    if(count==0 || count==1)
        return true;
    
    return false;
}

int main()
{
    vector<int> arr = {3 , 4 , 5 , 1 , 2};
    bool ans = check(arr);
    cout<<ans;
}