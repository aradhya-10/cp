// FORMAT
// int solve( int s[], int i, int j)
// {
//     if(i>j)
//         return 0;

//     for(int k=i; k<j; k++)
//     {
//         int temp = solve(i,k).f(solve(k+1,j));
//         ans = f'(temp);
//     }
//     return ans;
// }

// (a x b) * (b x c) => a x c
// Cost = a*b*c 

// array[] = 40 30 20 10 40
// Dimension od Matrix Ai = arr[i-1] x arr[i]
// A1 = 40 x 3  (First matrix )
// A0 DNE, first matrix is A1

#include <bits/stdc++.h>
using namespace std;

int solve(int a[], int i, int j)
{
    int ans = INT_MAX;
    if(i>=j)        // = beacuse 1 indices involved hain
        return 0;

    //k--> i to j-1  ==>  (i to k)  (k+1 to j)
    //k--> i+1 to j  ==>  (i to k-1)  (k to j)
    for(int k=i; k<j; k++) 
    {
        int temp = solve(a, i ,k) + solve(a, k+1, j) + a[i-1]*a[k]*a[j];
        ans = min(ans, temp);
    }
    return ans; 
} 

int main()
{
    int a[] = {10, 30, 5, 60};
    cout<<solve(a,1,3);
}