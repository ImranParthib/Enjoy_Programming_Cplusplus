#include <iostream>

int main()
{
    int sum = 0;
  

    for (int i = 1; i <= 1000; ++i)
    {
        sum += i;
    }

    std::cout << "The sum of numbers from 1 to 100 is: " << sum << std::endl;

    return 0;
}
