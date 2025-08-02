#include <iostream>
using namespace std;
int main()
{
    int n1, n2, i, gcd;

    // cout<<"Enter two integers"<<endl;;
    // cin>>n1>>n2;
    n1 = 20;
    n2 = 25;

    for (i = 1; i <= n1 && i <= n2; ++i)
    {
        // Checks if i is factor of both integers
        if (n1 % i == 0 && n2 % i == 0)
            gcd = i;
    }

    cout<<"G.C.D of " <<n1<<" and "<<n2<<" is "<<gcd<<endl;

    return 0;
}