#include <iostream>

int addNumber(int int1, int int2)
{
    int sum = int1 + int2;
    return sum;
}

int main()
{
    std::cout << "Sun of 2 numbers is: " << addNumber(10, 5) << std::endl;
    return 0;
}