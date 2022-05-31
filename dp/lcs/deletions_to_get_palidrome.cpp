//The minimum number of deletions to convert string a into a palindrome
//Same solution if the number of insertions are asked
#include <bits/stdc++.h>
using namespace std;
int t[1001][1001];

string reverse(string s, int n)
{
    string x="";
    for(int i =0; i<n; i++)
        x=x+s[n-1-i];
    return x;
}

int lcs(int k1, string a, string b)
{

    for(int n=0; n<=k1; n++)
        for(int m=0; m<=k1; m++)
        {
            if(n==0||m==0)
                t[n][m]=0;
            
            else if(a[n-1]==b[m-1])
                t[n][m]=1+t[n-1][m-1];

            else
                t[n][m]=max(t[n][m-1], t[n-1][m]);       
        }
    return t[k1][k1];
}

int main()
{
    string a;
    cin>>a;
    memset(t,-1,sizeof(t));
    int q1=a.length();
    string b=reverse(a,q1);
    cout<<q1-lcs(q1, a, b)<<endl;
}