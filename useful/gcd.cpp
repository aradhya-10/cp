//Euclid's Algorithm

#include <bits/stdc++.h>
using namespace std;
//O(<log N)
int gcd(int a, int b)
{
    if(b==0)                    // same as:     if(a%b==0)
        return a;               //                  return b;
    
    return gcd(b, a%b);
}

int lcm(int a, int b)
{
    return a*b/gcd(a,b);
}

int main()
{
    int a, b;
    cin>>a>>b;
    cout<<gcd(a,b);

    //built-in
    cout<<__gcd(a,b);
}