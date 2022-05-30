#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, wt;
	cin>>n>>wt;
	int w[n];
	int v[n];
	int t[n+1][wt+1];
	memset(t,0,sizeof(t));

	for(int i=0; i<n; i++)
		cin>>w[i];

	for(int i=0; i<n; i++)
		cin>>v[i];

	for(int i=0; i<n+1; i++)
		for(int j=0; j<wt+1; j++)
		{
			if(i==0||j==0)
				t[i][j]=0;

			else if(w[i-1]>j)
				t[i][j]=t[i-1][j];

			// only change 
			else
				t[i][j]=max((v[i-1]+t[i][j-w[i-1]]),t[i-1][j]);
		}

	for(int i=0; i<n+1; i++)
	{
		for(int j=0; j<wt+1; j++)
			cout<<t[i][j]<<" ";
		cout<<"\n";
	}

	cout<<t[n][wt]<<endl;
	return 0;
}
