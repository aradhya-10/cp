#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, l;
	cout<<"Enter: ";
	cin>>n>>l;
	int lt[n];
	int p[n];
	int t[n+1][l+1];
	memset(t,0,sizeof(t));

	for(int i=0; i<n; i++)
		lt[i]=i+1;

	for(int i=0; i<n; i++)
		cin>>p[i];

	for(int i=0; i<n+1; i++)
		for(int j=0; j<l+1; j++)
		{
			
			if(j==0||i==0)
				t[i][j]=0;

			else if(lt[i-1]>j)
				t[i][j]=t[i-1][j];

			// only change 
			else
				t[i][j]=max((p[i-1]+t[i][j-lt[i-1]]),t[i-1][j]);
		}

	for(int i=0; i<n+1; i++)
	{
		for(int j=0; j<l+1; j++)
			cout<<t[i][j]<<" ";
		cout<<"\n";
	}

	cout<<t[n][l]<<endl;
	return 0;
}
