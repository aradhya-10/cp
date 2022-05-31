#include <bits/stdc++.h>
using namespace std;
int t[1001][1001];

int lcs(int k2, int k1, string a, string b)
{
    for(int n=0; n<=k1; n++)
        for(int m=0; m<=k2; m++)
        {
            if(n==0||m==0)
                t[n][m]=0;
            
            else if(a[n-1]==b[m-1])
                t[n][m]=1+t[n-1][m-1];

            else
                t[n][m]=max(t[n][m-1], t[n-1][m]);
            
        }
    return t[k1][k2];
}

int main()
{
    string a,b;
    cin>>a>>b;
    memset(t,-1,sizeof(t));
    int q1=a.length();
    int q2=b.length();
    int ans=q1+q2-lcs(q2, q1, a, b);
    cout<<ans<<endl;
}