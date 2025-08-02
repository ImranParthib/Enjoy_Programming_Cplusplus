//Fibonacci Series using Iteration
#include <iostream>

using namespace std;

int fibonacci(int n)
{

    int a = 0;
    int b = 1;
    int c, i;

    if (n == 0)
    {
        return a;
    }

    for (i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
        cout << c << ", ";
    }

    return b;
}

int main()
{

    int n ;

    cout << fibonacci(n);
    return 0;
}
