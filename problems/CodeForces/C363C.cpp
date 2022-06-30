//IXING TYPOS
//https://codeforces.com/contest/363/problem/C

#include "bits/stdc++.h"
using namespace std;
#define max(a, b) ((a < b) ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define rep(a, c) for (int(a) = 0; (a) < (c); ++(a))
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
    string s;
    cin>>s;

    if(s.length()<3)
    {
        cout<<s<<endl;
        return;
    }
    
    string x;
    x.pb(s[0]);
    x.pb(s[1]);
    int n = s.length();
    int c = 2;
    repp(i,2,n-1)
    {
        if(s[i]!=s[i-1])
        {
            x.pb(s[i]);
            c++;
        }

        else
        {
            if(x[c-2]!=x[c-1])
            {
                if(c<3 || x[c-2]!=x[c-3])
                {
                    x.pb(s[i]);
                    c++;
                }
            }
        }
    }
    cout<<x<<endl;
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