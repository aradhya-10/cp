#include <bits/stdc++.h>
using namespace std;

int ks(int n, int w[], int v[], int wt)
{
	if(n==0||wt==0)
		return 0;

	if(w[n]>wt)
	{
		cout<<n<<" ";
		return ks(n-1, w, v, wt);
	}

	return max((v[n-1]+ks(n-1, w, v, wt-w[n-1])),ks(n-1, w, v, wt));
}

int main()
{
	int n, wt;
	cin>>n>>wt;
	int w[n];
	int v[n];

	for(int i=0; i<n; i++)
	{
		cin>>w[i];
		cin>>v[i];
	}

	cout<<ks(n-1, w, v, wt);
	return 0;
}