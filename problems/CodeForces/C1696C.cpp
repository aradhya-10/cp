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
#define fr first
#define sc second
#define pb push_back
#define pop pop_back
#define mp make_pair


bool solve()
{
    ll n, m, k, n1, q=1;
    cin >> n >> m;

    vector<pair<ll, ll>> a, b;
    a.pb({0,0});
    b.pb({0,0});
    rep(i,n)
    {
        cin>>k;
        q=1;
        while(k%m==0)
        {
            k/=m;
            q*=m;
        }
        if(a.back().fr!=k)
            a.pb({k,q});
        else
            a.back().sc+=q;
    }

    cin>>n1;
    rep(i,n1)
    {
        cin>>k;
        q=1;
        while(k%m==0)
        {
            k/=m;
            q*=m;
        }
        if(b.back().fr!=k)
            b.pb({k,q});
        else
            b.back().sc+=q;
    }
    
    if(a.size()!=b.size())
        return false;
    
    for(auto it = a.begin(), ti = b.begin(); it!=a.end(); it++, ti++)
        if(it->fr!=ti->fr || it->sc!=ti->sc)
            return false;
    
    return true;
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
        if(solve())
            cout<<"YES\n";
        else
            cout<<"NO\n";
    return 0;
}