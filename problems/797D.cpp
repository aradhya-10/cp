#include <bits/stdc++.h>
using namespace std;
 
int solve(int n, int k)
{
    int p=0;
    string s;
    cin>>s;
    for(int i =0; i<k; i++)
        if(s[i]=='W')
            p++;
    
    int mn=p;
    for(int i =k; i<n; i++)
    {
        if(s[i]=='W')
            p++;
        if(s[i-k]=='W')
            p--;
        mn=mn<p?mn:p;
    }
    return mn;
}
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        cout<<solve(n,k)<<endl;
    }
}