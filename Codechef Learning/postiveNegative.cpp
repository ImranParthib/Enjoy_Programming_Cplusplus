// Update the '_' in the code below to solve the problem

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int N, K;
        cin >> N >> K;
        int A[N];
        // Declare and initialise variables - pos, neg and divk
        // Note that we are reinitializing the variables to be 0 for each test case.
        int pos = 0;
        int neg = 0;
        int divk = 0;
        for (int i = 0; i < N; i++)
        {
            // Input the elements to the array
            cin >> A[i];
        }
        for (int i = 0; i < N; i++)
        {
            // Count the negative elements of the array
            if (A[i] < 0)
            {
                neg = neg + 1;
            }
            // Count the positive elements of the array
            else if (A[i] > 0)
            {
                pos = pos + 1;
            }
            // Count if the given element is divisible by k
            if (A[i] % K == 0)
            {
                divk = divk + 1;
            }
        }
        cout << pos << " " << neg << " " << divk << endl;
    }
    return 0;
}