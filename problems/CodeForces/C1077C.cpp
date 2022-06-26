//CINEMA
//https://codeforces.com/contest/670/problem/C

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
    int n, k, s=0;
    cin >> n;

    map<int, vi>m;

    rep (i, n)
    {
        cin>>k;
        s+=k;
        m[k].pb(i);
    }

    k=0;
    auto it = m.end();
    it--;
    int l = (*it).fr;
    s -= 2*l;

    if(s==0)
        k+=m[l].size()-1;
    else
    {
        it = m.find(s);
        if(it!=m.end())
            k+=m[s].size();
    }
    
    it--;
    int q = s+l-2*(*it).fr;
    if(q==0)
        k+=m[l].size();
    
    cout<<k<<endl;
    // if(p)
    // {
    //     it = x.find(p);
    //     while(it!=x.end())
    //     {
    //         cout<<it->sc<<" ";
    //         x.erase(it);
    //         it = x.find(p);
    //     }
    // }

    // if(q!=0)
    //     return;

    // it = x.find(l);
    // while(it!=x.end())
    // {
    //     cout<<it->sc<<" ";
    //     x.erase(it);
    //     it = x.find(l);
    // }
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