#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int minimizedStringLength(string s) {
        string result = "";
        int n = s.size();
        
        for (int i = 0; i < n; i++) {
            if (i == n - 1 || s[i] != s[i + 1]) {
                result += s[i];
            }
        }
        
        return result.size();
    }
};

int main() {
    Solution sol;
    string input = "aaabc";
    int output = sol.minimizedStringLength(input);
    
    cout << "Minimized string length: " << output << endl;

    return 0;
}
