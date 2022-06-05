#include <bits/stdc++.h>
using namespace std;
const int M = 1e9+7;
//O(<log N)
int binexpRec(int a, int b)
{
    if(b==0)
        return 1;
    int res = binexpRec(a,b/2);  
    if(b&1)
        return a*res*res;
    return res*res;
}

int main()
{
    int a, b;
    cin>>a>>b;
    cout<<binexpRec(a,b);
}