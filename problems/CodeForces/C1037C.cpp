//EQUALIZE
//https://codeforces.com/contest/1037/problem/C

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
    int n, k=0;
    cin >> n;

    string a, b;
    cin>>a>>b;

    repp(i,0,n-1)
    {
        if(a[i]!=b[i])
        {
            k++;
            if(i<n-1 && a[i]!=a[i+1] && a[i]==b[i+1])
                i++;
        }
    }
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
        solve();
    return 0;
}