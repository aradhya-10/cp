#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, l;
	cout<<"Enter: ";
	cin>>n>>l;
	int m[n];
	int t[n+1][l+1];
	memset(t,0,sizeof(t));

	for(int i=0; i<n; i++)
		cin>>m[i];

	for(int i=0; i<n+1; i++)
		for(int j=0; j<l+1; j++)
		{			
			// if(j==0)
			// 	t[i][j]=0;

			// else if(i==0)
			// 	t[i][j]=-1;

			// else if(m[i-1]>j)
			// 	t[i][j]=t[i-1][j];

			// else
            // {
            //     int k = min(t[i][j-m[i-1]],t[i-1][j]) == -1? max(t[i][j-m[i-1]],t[i-1][j]):min(t[i][j-m[i-1]],t[i-1][j]);
			// 	if (k==-1)
            //         t[i][j] = -1;
            //     else
            //         t[i][j] = k+1;
            // }
					
			if(j==0)
				t[i][j]=0;

			else if(i==0)
				t[i][j]=INT_MAX-1;

			else if(m[i-1]>j)
				t[i][j]=t[i-1][j];

			else
                t[i][j]=min(t[i][j-m[i-1]]+1,t[i-1][j]);
            
		}

	for(int i=0; i<n+1; i++)
	{
		for(int j=0; j<l+1; j++)
			cout<<t[i][j]<<" ";
		cout<<"\n";
	}

    // int mn = t[n][l];
    // for(int i=0; i<n; i++)
    //     if(mn>t[i][l] && t[i][l]!=-1)
    //         mn=t[i][l];

	cout<<t[n][l]<<endl;
	return 0;
}
