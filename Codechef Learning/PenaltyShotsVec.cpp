#include <iostream>
#include <vector>

using namespace std;

vector<int> soccerGameResult(int numTestCases, vector<vector<int>> &testCases)
{
    vector<int> results;

    for (const auto &testCase : testCases)
    {
        int team1Score = 0;
        int team2Score = 0;

        for (int i = 0; i < 10; ++i)
        {
            if (i % 2 == 0)
            {
                team1Score += testCase[i];
            }
            else
            {
                team2Score += testCase[i];
            }
        }

        if (team1Score > team2Score)
        {
            results.push_back(1);
        }
        else if (team2Score > team1Score)
        {
            results.push_back(2);
        }
        else
        {
            results.push_back(0);
        }
    }

    return results;
}

int main()
{
    int numTestCases;
    cin >> numTestCases;

    vector<vector<int>> testCases(numTestCases, vector<int>(10));

    for (int i = 0; i < numTestCases; ++i)
    {
        for (int j = 0; j < 10; ++j)
        {
            cin >> testCases[i][j];
        }
    }

    // Get results
    vector<int> results = soccerGameResult(numTestCases, testCases);

    // Output results
    for (const auto &result : results)
    {
        cout << result << endl;
    }

    return 0;
}
