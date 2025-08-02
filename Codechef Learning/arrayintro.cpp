#include <bits/stdc++.h>
using namespace std;

int main()
{

    int sampleArray[5] = {5, 6, 7, 77, 8};
    cout << size(sampleArray);
    // command for displaying the elements of the array
    for (int i = 0; i <= size(sampleArray); i++)
    {
        cout << sampleArray[i];
    }
    cout << endl;
    // output specific index from the array
    cout << sampleArray[4];
    return 0;
}