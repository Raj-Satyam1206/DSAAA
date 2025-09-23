// Find the GCD of two numbers
// GCD of two numbers remain same when the larger number subtracts the smaller number

/*
gcd(20 , 15) = gcd(20-15 , 15)
= gcd(5 , 15) = gcd(5 , 15-5)
= gcd(5 , 10) = gcd(5 , 10-5)
= gcd(5 , 5) = gcd(5-5 , 5)
= gcd(0 , 5) = 5

*/


#include<bits/stdc++.h>
using namespace std;

//EUCLIDEAN ALGO
int gcd(int n1, int n2)
{
    if(n1 == 0) return n2;
    if(n2 == 0) return n1;

    if(n1 >= n2)
        return gcd(n1-n2 , n2);
    else
        return gcd(n1 , n2-n1);           
}

int main()
{
    int n1 = 20 , n2 = 15;
    int ans = gcd(n1 , n2);
    cout<< "GCD of " << n1 << " and " << n2 << " is " << ans <<endl;

    return 0;
}