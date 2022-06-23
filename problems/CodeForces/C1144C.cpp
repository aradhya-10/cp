//Two Shuffled Sequences
//https://codeforces.com/contest/1144/problem/C
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

void print(vector<int>& a)
{
    if(a.size()==0)
        cout<<0<<endl;
    else
    {
        cout<<a.size()<<endl;
        for(auto x : a)
            cout<<x<<" ";
    }
    cout<<"\n";
}

void solve()
{
    int n;
    cin >> n;

    int f;
    vector<int> a;
    rep (i, n)
    {
        cin>>f;
        a.pb(f);
    }

    vector<int> v;
    sort(a.begin(),a.end());

    f=0;
    for(int i=1; i<n; i++)
    {
        if(a[i]==a[i-1])
        {
            if(f)
            {
                // cout<<endl<<i<<" "<<f<<" "<<a[i]<<" "<<a[i-1];
                cout<<" NO\n";
                return;
            }
            f=1;
            v.emplace_back(a[i]);
            a.erase(a.begin()+i);
            i--;
            n--;
        }
        else
        {
            f=0;
        }
    }

    cout<<"YES\n";
    reverse(v.begin(), v.end());
    print(a);
    print(v);
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