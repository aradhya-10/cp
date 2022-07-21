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
    int n;
    cin >> n;

    ll x, k=1, ans=1;
    map<int,int> m;
    rep (i, n)
    {
        cin>>x;
        m[x]++;
    }

    x=0;
    for(int i=1; i<=n; i++)
    {
        if(m[i]>k)
        {
            ans+=ceil(1.0*(m[i]-k)/i);
            k=ans*i;
            x+=m[i];
            k-=x;
        }
        else
        {
            k-=m[i];
            x+=m[i];
        }
        k+=ans;
    }

    cout<<ans<<endl;
}

int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) 
        solve();
    return 0;
}