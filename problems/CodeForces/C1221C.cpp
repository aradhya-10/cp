//PERFECT TEAM
//https://codeforces.com/contest/1221/problem/C
#include "bits/stdc++.h"
using namespace std;
#define max(a, b) ((a < b) ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 1e9 + 7
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


void solve()
{
    int c, m, x;
    cin >> c >> m >> x;

    int k = min(min(c,m),x);
    if(k==c || k==m)
    {
        cout<<k<<endl;
        return;
    }

    int q = m-x+c-x;
    q/=3;
    q = min(min(m-x, c-x), q);
    k+= q;
    cout<<k<<endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) 
        solve();
    return 0;
}