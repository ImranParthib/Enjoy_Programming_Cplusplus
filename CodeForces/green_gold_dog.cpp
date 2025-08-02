#include <iostream>
#include <vector>
#include <set>

using namespace std;

vector<int> max_distinct_difference(vector<int> a)
{
    int n = a.size();
    vector<int> b(n);

    // Sort the array a in increasing order.

    sort(a.begin(), a.end());

    // Initialize the set of distinct numbers in the element-wise difference.

    set<int> distinct_numbers;
    distinct_numbers.insert(a[0]);

    // Iterate over the elements of the array a.

    for (int i = 1; i < n; i++)
    {
        // If the current element is not equal to the previous element, add it to the set of distinct numbers.
        if (a[i] != a[i - 1])
        {
            distinct_numbers.insert(a[i]);
        }
    }

    // Create a permutation b such that the difference between each element of a and b is in the set of distinct numbers.

    for (int i = 0; i < n; i++)
    {
        b[i] = *distinct_numbers.begin();
        distinct_numbers.erase(distinct_numbers.begin());
    }

    return b;
}