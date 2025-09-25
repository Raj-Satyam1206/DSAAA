/*
Given a binary array nums, return the maximum number of consecutive 1's in the array.

 

Example 1:

Input: nums = [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.
Example 2:

Input: nums = [1,0,1,1,0,1]
Output: 2
*/


#include<bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int ans = INT_MIN;
        int i = 0;
        for(; i< nums.size(); i++)
        {
            if(nums[i] == 0)
            {
                ans = max(ans , count);
                count = 0; 
            }
            else count++;
        }
        if(i == nums.size())
            ans = max(ans , count);
        return ans;
        
}

int main()
{
    vector<int> arr = {1,1,0,1,1,1};
    int count = findMaxConsecutiveOnes(arr);
    cout<<count;
}