#include <iostream>
#include <algorithm> // for sort
using namespace std;

int main()
{
    int num[] = {1, 435, 6, 6, 7, 9, 9, 9, 9, 9, 78, 8};
    int length = sizeof(num) / sizeof(num[0]);

    // Sort so duplicates are adjacent
    sort(num, num + length);

    int distinctDuplicates[length / 2]; // max possible distinct duplicates
    int distinctCount = 0;
    int totalDuplicateElements = 0;

    for (int i = 0; i < length - 1; i++)
    {
        if (num[i] == num[i + 1])
        {
            totalDuplicateElements++; // counting first occurrence of a duplicate group

            // Store distinct duplicate if not already stored
            bool alreadyStored = false;
            for (int j = 0; j < distinctCount; j++)
            {
                if (distinctDuplicates[j] == num[i])
                {
                    alreadyStored = true;
                    break;
                }
            }
            if (!alreadyStored)
            {
                distinctDuplicates[distinctCount++] = num[i];
            }

            // Skip all further duplicates in this group
            while (i < length - 1 && num[i] == num[i + 1])
            {
                totalDuplicateElements++; // count each extra duplicate element
                i++;
            }
        }
    }

    // Print all distinct duplicates
    cout << "Distinct duplicate numbers: ";
    for (int i = 0; i < distinctCount; i++)
    {
        cout << distinctDuplicates[i] << " ";
    }
    cout << "\nTotal distinct duplicates: " << distinctCount << endl;
    cout << "Total duplicate elements: " << totalDuplicateElements << endl;

    return 0;
}
