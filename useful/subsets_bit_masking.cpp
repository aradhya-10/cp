#include <bits/stdc++.h>
using namespace std;
//O(n*2^n)
vector<vector<int>> subset(vector<int>& v, int n)
{
    int p = 1<<n;                           //Gives 2^n (=Number of subsets for set with n elements)
    vector<vector<int>> s;
    for(int i=0; i<p; i++)                  //Number 
    {
        vector <int> t;
        for(int sb=0; sb<n; sb++)
        {
            if(i & (1<<sb))                 // 1 if sb-th bit is set
                t.push_back(v[sb]);
        }
        s.push_back(t);
    }
    return s;
}

int main()
{
    int n,k;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++)
    {
        cin>>k;
        v.push_back(k);
    }

    auto subs = subset(v,n);
    for(auto s: subs)
    {
        for(auto el: s)
            cout<<el<<" ";
        cout<<"\n";
    }
}


// 0=4, 1=3, 2=7

// p=0     0 0 0  -->   null
// p=1     0 0 1  -->   4
// p=2     0 1 0  -->   3
// p=3     0 1 1  -->   4  3
// p=4     1 0 0  -->   7
// p=5     1 0 1  -->   7  4
// p=6     1 1 0  -->   7  3
// p=7     1 1 1  -->   7  3  4
