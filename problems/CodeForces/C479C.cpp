//EXAMS
//https://codeforces.com/contest/479/problem/C

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
    int n, x, y;
    cin >> n;

    vector<pi> v;
    rep(i,n)
    {
        cin>>x>>y;
        v.pb(mp(x,y));
    }

    sort(v.begin(), v.end(), [](auto& a, auto& b)
    { 
        if(a.fr==b.fr)
            return a.sc<b.sc;
        return a.fr<b.fr;
    });

    x=0;
    for(auto k : v)
    {
        if(x<=k.sc)
            x=k.sc;
        else
            x=k.fr;
    }

    cout<<x<<endl;
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