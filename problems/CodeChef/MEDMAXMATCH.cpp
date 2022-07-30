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
    int a[n], b[n];

    rep(i,n)
        cin>>a[i];

    rep(i,n)
        cin>>b[i];

    sort(a,a+n);
    sort(b,b+n);
    sort(b+n/2,b+n,greater<>());

    int x = a[n-1]+b[n-1];
    rep(i,(n/2)+1)
        x=min(x,a[i+n/2]+b[i+n/2]);
    
    cout<<x<<endl;
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