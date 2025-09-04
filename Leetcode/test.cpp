/**
 * Author: Imran Parthib
 */

#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

int main()
{
    vector<int> v = {1, 2, 3};
    pair<int, int> p = {4, 5};
    map<string, int> m = {{"apple", 2}, {"banana", 3}};

    debug(v, p, m);

    return 0;
}
