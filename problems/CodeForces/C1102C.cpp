//DOORS BREAKING AND REPAIRING
//https://codeforces.com/contest/1102/problem/C
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


int solve()
{
    int n,x,y;
    cin >> n >> x >> y;

    int a[n];
    rep(i,n)
        cin>>a[i];
    
    if(x>y)
        return n;
    
    sort(a,a+n);
    int p = upper_bound(a,a+n,x)-a;
    return (p+1)/2;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout<<solve()<<endl;
    return 0;
}