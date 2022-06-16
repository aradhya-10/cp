// Given 2 integers N and X, 
// generate a palindrome of length N 
// consisting of lowercase English alphabets 
// such that the number of distinct characters 
// in the palindrome is exactly X.
// If it is impossible to do so, print −1.

//TC
//I/P: 4 2
//O/P: xyyx (or abba or cddc...)

#include <bits/stdc++.h>
using namespace std;

string reverse(string s, int n)
{
    string x="";
    for(int i =0; i<n; i++)
        x=x+s[n-1-i];
    return x;
}

string solve()
{
    int n,k;
    cin>>n>>k;

    if(k>(n+1)/2)
        return "-1";
    
    string s="";
    char a='a';
    int n1=(n+1)/2;
    while(k--){
        s.push_back(a);
        a++;
        n1--;
    }

    a--;
    while(n1--)
        s.push_back(a);
    
    string s1 = reverse(s,s.length());
    if(n&1)
        s.append(s1.substr(1));
    else
        s.append(s1);
    
    return s;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
        cout<<solve()<<endl;
}