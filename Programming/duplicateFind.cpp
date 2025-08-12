#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int num[] = {1, 435, 6, 6, 7, 8};
    int length = sizeof(num) / sizeof(num[0]);
    vector<int> dupNum; // dynamic array

    for (int i = 0; i < length - 1; i++)
    {
        if (num[i] == num[i + 1])
        {
            // Check to avoid duplicates in dupNum
            if (dupNum.empty() || dupNum.back() != num[i])
            {
                dupNum.push_back(num[i]);
            }
            while (i < length - 1 && num[i] == num[i + 1])
            {
                i++;
            }
        }
    }

    cout << "Duplicate Numbers: ";
    for (int val : dupNum)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
