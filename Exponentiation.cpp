#include <iostream>


double power(int base,int exponent)
{
    double result = 1;

    if (power == 0)
    {
        return result;
    }

    for (int i = 0; i < abs(exponent); i++)
    {
        result = result * base;
    }

    if (exponent < 0) 
    {
        return 1 / result;
    }

    return result;
    return 0;
}

void print(double base, int exponent)
{
    std::cout << base << " raised to the power of " << exponent << " is equal to " << power(base,exponent) << std::endl;
}

int main()
{
    double base; 
    int exponent;
    std::cout << "The base: ";
    std::cin >> base;
    std::cout << "The exponent: ";
    std::cin >> exponent;
    print(base, exponent);
    return 0;
}