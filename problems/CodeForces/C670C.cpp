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
#define a first
#define b second
#define pb push_back
#define pop pop_back
#define mp make_pair

void solve()
{
    int n;
    cin >> n;

    unordered_map<int, int>m;
    int k;
    while(n--)
    {
        cin>>k;
        m[k]++;
    }

    int p,q=0,x=0;
    cin>>p;
    vector<int> v1, v2;
    rep(i,p)
    {
        cin>>k;
        v1.emplace_back(k);
    }
    rep(i,p)
    {
        cin>>k;
        v2.emplace_back(k);
    }

    // for(auto &it: m)
    //     cout<<it.first<<" "<<it.second<<"\n";

    rep(i,p)
    {
        if(m.find(v1[i])!=m.end())
        {
            if(m[v1[i]]>x)
            {
                x=m[v1[i]];
                q=i;
            }
            else if(m[v1[i]]==x)
            {
                if(m.find(v2[i])!=m.end())
                {
                    if(m.find(v2[q])!=m.end()){
                        if(m[v2[i]]>m[v2[q]])
                            q=i;}
                    else
                        q=i;
                }
                        
            }
        }
    }
    if(q==0)
    {
        rep(i,p)
        {
            if(m.find(v2[i])!=m.end())
            {
                if(m[v2[i]]>x)
                {
                    x=m[v2[i]];
                    q=i;
                }
            }
        }
    }
    cout<<q+1<<endl;
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