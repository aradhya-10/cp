#include <bits/stdc++.h>
using namespace std;

int lcs(int m, int n, string a, string b)
{
    if(n==0||m==0)
        return 0;
    
    if(a[n-1]==b[m-1])
        return 1+lcs(m-1, n-1, a,b);

    else
        return max(lcs(m-1, n, a, b), lcs(m, n-1, a,b));
}

int main()
{
    string a,b;
    cin>>a>>b;
    cout<<lcs(b.length(), a.length(), a, b)<<endl;
}