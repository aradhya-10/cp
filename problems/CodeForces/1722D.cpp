#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int n;

void solve()
{
	string s;
	cin >> n >> s;

	vector<ll> a;
	ll b = 0;
	for (int i = 0; i < n; i++)
	{
		if (s[i] == 'L')
		{
			a.push_back((n - 1 - i > i) ? n - 1 - i - i : 0);
			b += i;
		}
		else
		{
			a.push_back((i > n - 1 - i) ? i + i + 1 - n : 0);
			b += n - 1 - i;
		}
	}

	sort(a.begin(), a.end());
	for (int i = 0; i < n; i++)
	{
		b += a[n - 1 - i];
		cout << b << " ";
	}
	cout << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		solve();
	}
}
