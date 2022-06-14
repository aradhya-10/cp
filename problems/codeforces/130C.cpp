//Given two strings s & t o same length, 
//consisting only of the letters 'a', 'b' and 'c',
//find out whether s can be converted to t using 
//1. change "ab" to "ba"
//2. change "bc" to "ca"

#include <bits/stdc++.h>
using namespace std;

bool solve()
{
    int n;
    cin>>n;
    string s,t;
    cin>>s>>t;

    if(s==t)
        return true;

    for(int i=0; i<n; i++)
    {
        if(s[i]!=t[i])
        {
            if((s[i]!='b' && t[i]!='b') || s[i]=='c' || t[i]=='a')
                return false;
            
            if(t[i]=='b')
            {
                int k=i;
                while(k<n && t[k]!='a')
                    if(t[k++]!='b')
                        return false;
                if(k==n)
                    return false;
                t[k]='b';
            }

            else if(s[i]=='b')
            {
                int k=i;
                while(k<n && s[k]!='c')
                    if(s[k++]!='b')
                        return false;
                if(k==n)
                    return false;
                s[k]='b';
            }
        }
    }
    return true;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
        if(solve())
            cout<<"YES"<<endl;
        else
            cout<<"NO\n";
}


//An alternative way is to just check whether or not
//'a' aways occured first in s and 'c' always occured first in t.
//and the string without 'b's should be equal.
