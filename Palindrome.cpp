/*
Given an integer x, return true if x is a palindrome, and false otherwise.

Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
*/

#include<bits/stdc++.h>
using namespace std;


bool isPalindrome(int x) {
    if(x < 0) {
        return false;
    }
    
    long rev = 0;
    int num = x;
    
    while(num != 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    
    return rev == x;
}

int main()
{
    int n ;
    cout<<"Enter a number"<<endl;
    cin>>n;
    cout<<endl;
    bool ans = isPalindrome(n);
    cout<< ans;
}