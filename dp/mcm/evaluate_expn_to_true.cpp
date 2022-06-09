//number of ways to Evaluate an Expression to True
//1. Find i and j --> 0, str.length()-1
//2. Base Condition 

#include <bits/stdc++.h>
using namespace std;
int t[1001][1001];

int solve(string a, int i, int j, bool isTrue)
{
    int ans = 0;
    if(i>j)
        return false;
        
    if(i==j)       
        if(isTrue)
            ans+=(a[i]=='T');
        else
            ans+=(a[i]!='T');

    for(int k=i+1; k<j; k+=2) 
    {
        int rT = solve(a,i,k-1,true);
        int lT = solve(a,k+1,j, true);
        int rF = solve(a,i,k-1, false);
        int lF = solve(a,k+1,j, false);
        
        if(a[k]=='&')
            if(isTrue==true)
                ans+= rT*lT;
            else
                ans+= rT*lF + rF*lT + rF*lF;
            
        if(a[k]=='|')
            if(isTrue==true)
                ans+= rT*lF + rF*lT + rT*lT;
            else
                ans+= rF*lF;

        if(a[k]=='^')
            if(isTrue==true)
                ans+= rT*lF + rF*lT;
            else
                ans+= rF*lF + rT*lT;
        
    }
    return ans; 
} 
 
int main()
{
    string a;
    cin>>a;
    int n = a.length();
    memset(t, -1, sizeof(t));
    cout<<solve(a,0,n-1,true);
}