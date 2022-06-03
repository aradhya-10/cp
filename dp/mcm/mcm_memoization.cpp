#include <bits/stdc++.h>
using namespace std;
int t[1001][1001];

int solve(int a[], int i, int j)
{
    int ans = INT_MAX;
    if(i>=j)        // = beacuse 1 indices involved hain
        return 0;

    if(t[i][j]!=-1)
        return t[i][j];

    for(int k=i; k<j; k++) 
    {
        int temp = solve(a,i,k) + solve(a,k+1,j) + a[i-1]*a[k]*a[j];
        ans = min(ans, temp);
    }
    return t[i][j]= ans; 
} 

int main()
{
    int a[] = {10, 30, 5, 60};
    memset(t, -1, sizeof(t));
    cout<<solve(a,1,3);
}