//TEAM
//https://codeforces.com/contest/401/problem/C

#include "bits/stdc++.h"
using namespace std;
#define max(a, b) ((a < b) ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define rep(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define repp(i, b, c) for (int(i) = (b); (i) <= (c); (i)++)
#define rof(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define INF 1000000000000000003
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define fr first
#define sc second
#define pb push_back
#define pop pop_back
#define mp make_pair
const int M = 1e9 + 7;

void solve()
{
    int n, m;
    cin >> n >> m;

    if(n>m+1 || m>(n*2+2))
    {
        cout<<-1<<endl;
        return;
    }

    if(n>m)
    {
        cout<<0;
        n--;
    }
    
    while(n && m>n)
    {
        cout<<110;
        m-=2;
        n--;
    }

    while(n && m==n)
    {
        cout<<10;
        m--;
        n--;
    }
    
    while(m--)
        cout<<1;
        
    cout<<endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(0);
    cin.tie(0);
        solve();
    return 0;
}