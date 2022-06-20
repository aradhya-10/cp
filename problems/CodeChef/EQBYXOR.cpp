#include <bits/stdc++.h>

using namespace std;

int solve()
{
  long long int a, b, n;
  cin >> a >> b >> n;
  
    int x = a^b;
    
    if (x == 0)
        return 0;
    
    if(x<n)
        return 1;
    
    if(floor(log2(x))==floor(log2(n-1)))
        return 2;
    
    return -1; 
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    cout<<solve()<<endl;
  }
}