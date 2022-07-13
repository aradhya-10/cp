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

bool solve()
{
    int n;
    string s;
    cin >> n >> s;

    if(n==1)
        return true;

    if(s[0]!=s[1])
        return false;

    int f=0;
    for(int i=n-1; i>0; )
    {
        if(i%2==0)
        {
            s.pop_back();
            i--;
        }
        
        else
        {
            if(s.substr(0,(i+1)/2)!=s.substr((i+1)/2))
            {
                cout<<s.substr(0,(i+1)/2)<<" "<<s.substr((i+1)/2)<<"\n";
                return false;
            }
            s.erase((i+1)/2);
            i=i/2;
        }
    }

    return true;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) 
        if(solve())
            cout<<"YES\n";
        else
            cout<<"NO\n";
    return 0;
}