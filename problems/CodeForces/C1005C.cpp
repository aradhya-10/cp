//SUMMARIZE TO THE POWER OF TWO
//https://codeforces.com/contest/1005/problem/C

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


void solse()
{
    int n,k;
    cin >> n;

    map<int, int> s;
    map<int, bool> b;
    rep (i, n)
    {
       cin >> k;
       s[k]++;
       b[k]=false;
    }

    k=0;
    for(auto it = s.begin(); it!= s.end(); it++)
    {
        int x = (*it).first;
        int q = log2(x)+1;
        int c = (1<<q)-x;
        auto itr = s.find(c);
        if(itr!=s.end() && ( itr != it || s[x]>1))
        {
            b[x]=true;
            b[itr->first]=true;
        }
    }

    // for(auto it = s.begin(); it!= s.end(); it++)
    //     cout<<(*it).first<<" "<<it->second<<" "<<b[it->first]<<endl;

    for(auto it = b.begin(); it!= b.end(); it++)
        if(!(it->second))
            k+=s[it->first];
    
    cout<<k<<"\n";
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(0);
    cin.tie(0);
        solse();
    return 0;
}