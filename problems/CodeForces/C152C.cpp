//POCKET BOOK
//https://codeforces.com/contest/152/problem/C

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
#define a first
#define b second
#define pb push_back
#define pop pop_back
#define mp make_pair
const int mod = 1e9 + 7;

void solve()
{
    int n, m;
    cin >> n >> m;

    string x[n];
    rep(i,n)
        cin>>x[i];

    ll a = 1LL;

    for(int i=0; i<m; i++)
    {
        set <int> s;
        for(int j=0; j<n; j++)
            s.insert(x[j][i]);
        
        a = (a%mod * s.size()%mod) % mod;
    }

    cout<<a<<endl;
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