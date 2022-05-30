#include <bits/stdc++.h>
using namespace std;

int sss(int t[], int n, int s, int x)
{
	int a[n+1][s+1];
	// memset(a,0,sizeof(a));
	for(int i=0; i<=n; i++)
		for(int j=0; j<=s; j++)
		{
			if(i==0)
				a[i][j]=0;

			if(j==0)
				a[i][j]=1;

			if(i!=0 && j!=0)
			{
				if(t[i-1]<=j)
					a[i][j] = a[i-1][j]+a[i-1][j-t[i-1]];
				else
					a[i][j] = a[i-1][j];
			}
		}

	for(int i=0; i<=n; i++)
	{
		for(int j=0; j<=s; j++)
			cout<<"a["<<i<<"]["<<j<<"]: "<<a[i][j]<<" ";
		cout<<"\n";
	}

	// int m=0;
	// for(int i=0; i<=s/2; i++)
	// {
	// 	if(a[n][i]!=0 && s-2*i==x)
	// 		m += a[n][i];
	// }
	// return m;

	// alt app
	int p = (s+x)/2;
	return a[n][p];
}
 
int main()
{
	int n,s=0,x;
	cin>>n>>x;
	int t[n];
	for(int i=0; i<n; i++)
	{
		cin>>t[i];
		s+=t[i];
	}

	cout<<sss(t,n,s,x)<<endl;
	return 0;
}