//CD AND PWD COMMANDS
//https://codeforces.com/contest/158/problem/C

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

void print(vector<string> s)
{
    for(auto it : s)
        cout<<"/"<<it;
    cout<<"/\n";
}

void solve()
{
    int n;
    cin >> n;
    cin.ignore();
    vector <string>s;
    string x;

    while(n--)
    {
        getline(cin,x);
        if(x=="pwd")
            print(s);
        else
        {
            string p;
            if(x[3]=='/')
                s.clear();
            for(int i=3; i<x.length(); i++)
            {
                if(x[i]!='/')
                    p.pb(x[i]);
                else
                {
                    if(p=="..")
                        s.pop_back();
                    else if(p.size()!=0)
                        s.pb(p);
                    p="";
                }
            }
            if(p=="..")
                s.pop_back();
            else if(p.size()!=0)
                s.pb(p);
        }
    }
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