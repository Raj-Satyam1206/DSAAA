/*

Given a signed 32-bit integer x, return x with its digits reversed. 
If reversing x causes the value to go outside the signed 32-bit integer range [-2^31, 2^31 - 1], then return 0.
N = 123   -> 321
N = -123  -> -321

*/
#include<bits/stdc++.h>
using namespace std;


int reverse(int x) {
    int sum = 0;
    while(x != 0)
    {
        int rem = x % 10;
        if(sum > INT_MAX/10 || sum < INT_MIN/10) return 0;
        sum = sum * 10 + rem;
        x = x / 10;
    }

    return sum;
}


int main()
{
    int n ;
    cout<<"Enter a number"<<endl;
    cin>>n;
    cout<<endl;
    int ans = reverse(n);
    cout<<"Reverse of " << n << " is " << ans;
}


/*
sum * 10 > INT_MAX
= sum > INT_MAX/10
*/