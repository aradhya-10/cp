//PRODUCT OF TWO NUMBERS
//https://codeforces.com/contest/1294/problem/C

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

void solve()
{
    int n, k;
    ll s=0;
    cin>>n;

    vi v;
    int n1 = n;
    for(int i=2; i*i<n1; i++)
    {
        if(n1%i==0)
        {
            n1/=i;
            v.pb(i);
            if(v.size()==2)
                break;
        }    
    }

    if(v.size()==2 && v[1]!=n1)
        cout<<"YES\n"<<v[0]<<" "<<v[1]<<" "<<n1<<endl;
    else
        cout<<"NO\n";
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
        solve();
    return 0;
}