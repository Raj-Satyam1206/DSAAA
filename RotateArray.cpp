/*
Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

Example 1:

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]

Example 2:

Input: nums = [1,2], k = 7
Output: [2,1]

Could you do it in-place with O(1) extra space?
*/

#include<bits/stdc++.h>
using namespace std;



void reverse(vector<int>&arr , int s , int e)
{
    while(s<=e)
    {
        swap(arr[s] , arr[e]);
        s++;
        e--;
    }
}

void rotate(vector<int>& nums, int k) 
{
    int n = nums.size();
    k = k % n;
    reverse(nums , 0 , n-k-1);
    reverse(nums , n-k , n-1);
    reverse(nums , 0 , n-1);
}

int main()
{
    vector<int> arr = {1,2,3,4,5,6,7};
    int k = 3;
    rotate(arr , k);
}

// k = k % n  will keep the value of "k" within n size.