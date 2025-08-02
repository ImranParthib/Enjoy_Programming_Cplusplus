// Update the '_' in the code below to solve the problem

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int N;
        cin >> N;
        int A[N];

        for (int i = 0; i <= N; i++)
        {
            A[i - 1] = i + 0;
        }
        // print the elements of array A
        for (int i = 0; i < N; i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
        // print the elements of array A in descending order
        for (int i = N - 1; i >= 0; i--)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
}
