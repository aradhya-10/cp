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
int n;

void solve()
{
    cin >> n;

    int f=1;
    int a[n];
    rep (i, n)
    {
        cin >> a[i];
        if(a[i])
            f=0;
    }

    sort(a,a+n);
    int c=0, b=n-1, x=0;

    for(int i=0; i<n && b>0; i++)
    {
        if(a[i]<=b)
        {
            b-=a[i];
            c++;
        }
    }
    if(f)
        cout<<n-1<<endl;
    else
        cout<<c<<endl;
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