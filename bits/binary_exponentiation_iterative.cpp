#include <bits/stdc++.h>
using namespace std;
const int M = 1e9+7;
//O(<log N)
int binexpItr(int a, int b)
{
    int ans = 1;
    while(b)
    {
        if(b&1)
            ans = ( ans * a ) % M;
        
        a*=a;
        b >>= 1;
    }                
    return ans;
}

int main()
{
    int a, b;
    cin>>a>>b;
    cout<<binexpItr(a,b);
}