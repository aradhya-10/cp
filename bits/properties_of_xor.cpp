#include <bits/stdc++.h>
using namespace std;

void swap(int a, int b) 
{
    cout<<a<<" "<<b<<endl;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<a<<" "<<b<<endl;
}

int main()
{
    int t;
    cin>>t;
    swap(4,7);
    // a^b=c =>  a^c=b, b^c=a
    // a^b^c = a^c^b = b^c^a = c^a^b
    // a^a = 0
    // a^0 = a
}