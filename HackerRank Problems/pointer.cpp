#include <bits/stdc++.h>
using namespace std;

void update(int *a, int *b)
{
    int sum = *a + *b;
    int sub = (*a - *b);
    // int sub = abs(*a - *b);
    if(sub<0){
        sub = -sub;
    }
    *a = sum;
    *b = sub;
}
int main()
{
    int a, b;
    cin >> a >> b;
    int *pa = &a;
    int *pb = &b;
    update(pa, pb);
    cout << a << endl;
    cout << b << endl;

    return 0;
}