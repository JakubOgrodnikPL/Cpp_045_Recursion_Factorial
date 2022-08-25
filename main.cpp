#include <iostream>
using namespace std;
long int fac(int n)
{
    if (n==0) return 1;
    else return n*fac(n-1);
}
int main()
{
    cout << fac(6) << endl;
    return 0;
}
