#include <bits/stdc++.h>
using namespace std;
int t[10][10];

int ks(int n, int w[], int v[], int wt)
{
	if(n==0||wt==0)
		return 0;

	// Hona na hona same thing ig
	// if(t[n][wt]!=0)
	// 	return t[n][wt];

	if(w[n]>wt)
	{
		// cout<<n<<" ";
		return t[n][wt]=ks(n-1, w, v, wt);
	}

	return t[n][wt]=max((v[n-1]+ks(n-1, w, v, wt-w[n-1])),ks(n-1, w, v, wt));
}

int main()
{
	int n, wt;
	cin>>n>>wt;
	int w[n];
	int v[n];
	memset(t,0,sizeof(t));

	for(int i=0; i<n; i++)
	{
		cin>>w[i];
		cin>>v[i];
	}

	cout<<ks(n-1, w, v, wt);
	return 0;
}