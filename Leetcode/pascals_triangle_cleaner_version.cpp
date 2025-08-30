class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal;
        for(int i = 0; i<numRows; i++){
            vector<int> row(i+1, 1);
            for(int j = 1; j< i; j++){
                row[j] = pascal[i-1][j-1] + pascal[i-1][j];
            }
            pascal.push_back(row);
        }
        return pascal;
    }
};


// This code from Solutions
// https://leetcode.com/problems/pascals-triangle/solutions/7030277/simple-bottom-up-approach-example-walkthrough-beats-100-c-py-java/?envType=daily-question&envId=2025-08-30