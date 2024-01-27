#include <iostream>

int main()
{
    int i, j;

    do
    {
        std::cin >> i >> j;

        if(i > j)
        {
            std::cout << "Decrescente" << std::endl;
        }
        else if(i < j)
        {
            std::cout << "Crescente" << std::endl;
        }
        else
        {
            break;
        }
    } while ( i != j);
    
    return 0;
}