#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int t = 1; t <= T; t++) {
        int N;
        cin >> N;
        unordered_set<int> costumes;
        for (int i = 0; i < N; i++) {
            int costume;
            cin >> costume;
            costumes.insert(costume);
        }
        cout << "Case " << t << ": " << costumes.size() << endl;
    }
    return 0;
}