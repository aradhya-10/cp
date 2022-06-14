//Number of ways to evaluate the given expression to 'True'

#include <bits/stdc++.h>
using namespace std;
map <string,int> mp;

int solve(string a, int i, int j, char isTrue)
{
    int ans = 0;
    if(i>j)
        return false;
        
    if(i==j)      
        if(isTrue=='T')
            ans+=(a[i]=='T');
        else
            ans+=(a[i]!='T');

    string s = "";
    s.append(to_string(i));
    s.push_back(' ');
    s.append(to_string(j));
    s.push_back(' ');
    s.append(to_string(isTrue));
    // cout<<s<<" || ";
    if(mp.find(s)!=mp.end())
    {
        // cout<<"found "<<s<<endl;
        return mp[s];
    }
    for(int k=i+1; k<j; k+=2) 
    {
        int rT = solve(a,i,k-1,'T');
        int lT = solve(a,k+1,j,'T');
        int rF = solve(a,i,k-1,'F');
        int lF = solve(a,k+1,j,'F');
        
        if(a[k]=='&')
            if(isTrue=='T')
                ans+= rT*lT;
            else
                ans+= rT*lF + rF*lT + rF*lF;
            
        if(a[k]=='|')
            if(isTrue=='T')
                ans+= rT*lF + rF*lT + rT*lT;
            else
                ans+= rF*lF;

        if(a[k]=='^')
            if(isTrue=='T')
                ans+= rT*lF + rF*lT;
            else
                ans+= rF*lF + rT*lT;
        
    }
    return mp[s]=ans; 
} 
 
int main()
{
    string a = "";
    cin>>a;
    int n = a.length();
    cout<<solve(a,0,n-1,'T');
}
