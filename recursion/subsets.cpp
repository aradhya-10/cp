#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
void solve(string in , string out)
{
    if(in=="")
    {
        cout<<out<<" ";
        return;
    }

    string o1 = out+in[0];
    string o2 = out+" "+in[0];
    in.erase(in.begin()+0);

    solve(in,o1);
    solve(in,o2);
}

int main() 
{
    string n;
    cin>>n; 
    string k = "";
    k+=n[0];
    n.erase(n.begin()+0);
    solve(n,k);
}