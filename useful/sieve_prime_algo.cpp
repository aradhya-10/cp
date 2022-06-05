#include <bits/stdc++.h>
using namespace std;

const int N = 1e7+10;
vector <bool> isPrime(N,1);
//1/2+1/3+1/5+1/7+1/11+.... --> log(log N)

int main()
{
     isPrime[0] = isPrime[1] = false;
     for(int i = 2; i<N; i++)
     {
         if(isPrime[i]==true)
         {
            for(int j = 2*i; j<N; j==i)
                isPrime[j]=false;
         }
     }

     for(int i = 1; i<100; i++)
        cout<<isPrime[i]<<endl;
}
