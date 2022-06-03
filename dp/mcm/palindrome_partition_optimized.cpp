#include <bits/stdc++.h>
using namespace std;
int t[1001][1001];

bool ispalindrome(string s, int i, int j)
{  
    int n = j-i;
    while(n-- && s[i]==s[j])
    {
        i++; 
        j--;
    }

    if(i>=j)
        return true;
    return false;
}

int solve(string a, int i, int j)
{
    int ans = INT_MAX;
    if(i>=j)       
        return 0;

    if(t[i][j]!=-1)
        return t[i][j];

    if(ispalindrome(a,i,j))
        return t[i][j]=0;

    for(int k=i; k<j; k++) 
    {
        if(t[i][k]==-1)
            t[i][k]= solve(a,i,k);

        if(t[k+1][j]==-1)
            t[k+1][j]=solve(a,k+1,j);
        
        int temp = t[i][k] + t[k+1][j] + 1;
        ans = min(ans, temp);
    }
    return t[i][j]= ans; 
} 

int main()
{
    string a = "";
    cin>>a;
    int n = a.length();
    memset(t, -1, sizeof(t));
    cout<<solve(a,0,n-1);
}