//Hexadecimal's Numbers
//https://codeforces.com/contest/9/problem/C
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
    string s;
    cin>>s;
    int k=0, q=1, n=s.length();

    while(k<n && ((s[k]-'0')<=1))
        k++;
    
    while(k<n)
        s[k++]='1';
    
    cout<<s<<endl;
    k=0;
    for(int i=n-1; i>=0; --i)
    {
        k+=(s[i]-'0')*q;
        q<<=1;
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