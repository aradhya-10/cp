//The minimum number of insertions and deletions to convert string a to string b
#include <bits/stdc++.h>
using namespace std;
int t[1001][1001];

int lcs(int k1, string a, string b)
{

    for(int n=0; n<=k1; n++)
        for(int m=0; m<=k1; m++)
        {
            if(n==0||m==0)
                t[n][m]=0;
            
            else if(a[n-1]==b[m-1] && (n!=m))
                t[n][m]=1+t[n-1][m-1];

            else
                t[n][m]=max(t[n][m-1], t[n-1][m]);       
        }

    return t[k1][k1];
}

// void prt(int n, int m, string a, string b)
// {
//     string s="";
//     int i=n, j=m;
//     while(i>0 && j>0)
//     {
//         if(a[i-1]==b[j-1] && (i!=j))
//         {
//             s=a[i-1]+s;
//             i--;
//             j--;
//         }
        
//         else
//         {
//             if(t[i-1][j]>t[i][j-1])
//                 i--;
//             else
//                 j--;
//         }
//     }
//     cout<<s<<endl;
// }

int main()
{
    string a;
    cin>>a;
    memset(t,-1,sizeof(t));
    int q1=a.length();
    cout<<lcs(q1, a, a)<<endl;
    // prt(q1, q1, a, a);
}