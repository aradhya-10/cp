#include <bits/stdc++.h>
using namespace std;

int sss(int t[], int n, int s)
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
					a[i][j] = max(a[i-1][j], a[i-1][j-t[i-1]]);
				else
					a[i][j] = a[i-1][j];
			}
		}

	// vector<int> v;
	// for(int j=0; j<=s/2; j++)
	// 	if(a[n][j]==1)
	// 		v.push_back(j);
	
	// int m = INT_MAX;
	// for(int i=0; i<v.size(); i++)
	// 	m=min(m,s-2*v[i]);

	// Alt Ig
	int m=0;
	for(int i=0; i<=s/2; i++)
	{
		if(a[n][i]==1)
			m = s-2*i;
	}

	return m;
}

int main()
{
	int n,s=0;
	cin>>n;
	int t[n];
	for(int i=0; i<n; i++)
	{
		cin>>t[i];
		s+=t[i];
	}

	cout<<sss(t,n,s)<<endl;
	return 0;
}