// Update the '_' in the code below to solve this problem

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string A, B;
        cin >> A >> B;
        // variable to store the count of '1's in A
        int a_count = 0;
        // variable to store the count of '1's in B
        int b_count = 0;
        // variable to store the count of indices where A[i] = B[i]
        int common = 0;

        // Count '1s' in A
        for (int i = 0; i < A.length(); i++)
        {
            if (A[i] == '1')
            {
                a_count++;
            }
        }

        // Count '1s' in B
        for (int i = 0; i < B.length(); i++)
        {
            if (B[i] == '1')
            {
                b_count++;
            }
        }
        // Count indices where A[j] = B[j]
        for (int i = 0; i < A.length(); i++)
        {
            if (A[i] == B[i])
            {
                common++;
            }
        }
        cout << a_count << " " << b_count << " " << common << endl;
    }
    return 0;
}
