/**
 **Author: Imran Parthib
 *!Date: 12-11-2024  12:18:37
 */
 
// A Beautiful Matrix
// Type : Implementation
// Problem Link: https://codeforces.com/contest/263/problem/A

// Solution:

#include <bits/stdc++.h>
#include<cmath>
using namespace std;

int main() {
    int x, y;
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 5; j++){
            int a;
            cin >> a;
            if(a == 1){
                x = i;
                y = j;
            }
        }
    }

    cout << abs(x - 3) + abs(y - 3) << endl;

    


    return 0;
}