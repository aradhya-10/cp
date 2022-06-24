#include <bits/stdc++.h>
using namespace std;
const int M = 1e9+7;
//O(<log N)
int binexpItr(int x, int a, int b)
{
    int ans = x;
    while(b)
    {
        if(b&1)
            ans = ((ans%M) * 1LL * (a%M)) % M;
        
        a=((a%M) * 1LL * (a%M)) % M;
        b >>= 1;
    }                
    return ans;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
        cin>>b>>a;
        cout<<binexpItr(a,2,b-1)<<endl;
    }
}