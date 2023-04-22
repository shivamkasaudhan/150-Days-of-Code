#include <iostream>
bool print_prime(int n)
{
    if (n == 1 || n == 0) //first condition
    {
        return false;
    }
    for (int i = 2; i*i <= n; i++) 
    {
        if (n % i == 0)     //second condition
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    std::cin >> n;
    for (int i = 0; i <= n; i++)
    {
        if (print_prime(i))
        {
            std::cout<<i<<" ";
        }
    }

    return 0;
}