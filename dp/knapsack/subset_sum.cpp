#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,s;
	cin>>n>>s;
	int t[n];
	for(int i=0; i<n; i++)
		cin>>t[i];

	int a[n+1][s+1];
	// memset(a,0,sizeof(a));
	for(int i=0; i<=n; i++)
	{
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
	}

	for(int i=0; i<=n; i++)
	{
		for(int j=0; j<=s; j++)
			cout<<"a["<<i<<"]["<<j<<"]: "<<a[i][j]<<" ";
		cout<<"\n";
	}

	cout<<a[n][s]<<endl;
}