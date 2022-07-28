//Rumours
//https://codeforces.com/contest/1077/problem/C
#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
#define rep(a, c) for (int(a) = 0; (a) < (c); (a)++)
const int N = 1e5+3;
vector<int> G[N];
vector<int> vis(N,0); 
vector<int> v(N);
long long int gold = 0;
int mn;

int dfs(int ver)
{    
    vis[ver] = 1;
    for(int child : G[ver])
    {
        if(vis[child])
            continue;
        
        dfs(child);
        mn = min(mn, v[child]);
    }

    mn = min(mn, v[ver]);
    // cout<<ver<<" "<<v[ver]<<" "<<k[ver]<<" "<<p<<"\n";
    return mn;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    cin>>n>>m;

    int x, y;
    for(int i=1; i<=n; ++i)
    {
        cin>>x;
        v[i]=x;
    }
    
    for(int i=0; i<m; ++i)
    {
        cin>>x>>y;
        G[x].push_back(y);
        G[y].push_back(x);
    }

    y=0;
    for(int i=1; i<=n; i++)
    {
        if(vis[i])
            continue;
        
        y++;
        mn = INT_MAX;
        gold+=dfs(i);
    }

    cout<<gold<<endl;
    return 0;
}