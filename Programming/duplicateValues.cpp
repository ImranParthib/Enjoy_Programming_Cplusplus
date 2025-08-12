#include <iostream>
using namespace std;

int main()
{
    int num[] = {1, 435, 6, 6, 7, 9, 9, 9, 9, 9, 78, 8};
    int length = sizeof(num) / sizeof(num[0]);
    int dupNum[length / 2];
    int totalduplicate = 0;
    int duplicateAppearance = 0;
    for (int i = 0; i < length - 1; i++)
    {
        if (num[i] == num[i + 1])
        {
            totalduplicate++;
            cout << "Duplicate Numbers: " << num[i] << endl;

            while (i < length - 1 && num[i] == num[i + 1])
            {
                duplicateAppearance++;
                i++;
            }
        }
    }
    cout << totalduplicate << endl;
    cout << duplicateAppearance + totalduplicate << endl;

    return 0;
}