#include <bits/stdc++.h>
using namespace std;
 
// Function to find rightmost
// set bit in given number.

// unsigned int getFirstSetBitPos_fun(int n)
// {
//     return ffs(n);
// }

//(n&~(n-1)) always return 
//the binary number containing 
//the rightmost set bit as 1.
//if N = 12 (1100) then it will return 4 (100)
//Take log2 of the no, you will get (pos – 1)
int getFirstSetBitPos(int n)
{
    return log2(n & -n) + 1;
}

int PositionRightmostSetbit(int n)
{
      if(n == 0)
          return 0;
    // Position variable initialize with 1
    // m variable is used to check the set bit
    int position = 1;
    int m = 1;
 
    while (!(n & m)) 
    { 
        m = m << 1;
        position++;
    }
    return position;
}

//All have complexity O(log2(n))
int main()
{
    int n = 12;
    cout << getFirstSetBitPos(n) << endl;
    return 0;
}