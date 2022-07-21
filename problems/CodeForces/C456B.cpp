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

void solve()
{
    string s;
    cin>>s;

    if(s=="0")
    {
        cout<<4<<endl;
        return;
    }

    int n = s.length();
    int a = (s[n-1]-'0')%4;
    int b = a;
    if(n>1)
        b = ((s[n-1]-'0')+(s[n-2]-'0')*10)%4;
    
    // int a1[] = {6,2,4,8};
    // int b1[] = {6,4,6,4};
    // int c1[] = {1,3,9,7};

    int x[] = {13,9,19,19};
    n = (1 + x[b])%5;
    cout<<n<<endl;
}

int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(0);
    cin.tie(0);
        solve();
    return 0;
}