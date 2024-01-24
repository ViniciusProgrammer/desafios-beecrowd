#include <iostream>

int main()
{
    int n, m, soma = 0;

    do
    {
        soma = 0;
        std::cin >> n >> m;

        if (n <= 0 || m <= 0)
        {
            break;
        }
        else{
            if(n < m)
            {
                for(int i = n; i <= m; i++)
                {
                    std::cout << i << " ";
                    soma += i;
                }
                std::cout << "Sum=" << soma << std::endl;
            }
            else if(n > m)
            {
                for(int i = m; i <= n; i++)
                {
                    std::cout << i << " ";
                    soma += i;
                }
                std::cout << "Sum=" << soma << std::endl;
            }
            else
            {
                std::cout << n << " Sum=" << n << std::endl;
            }
        }
    }while(n >= 0 || m >= 0);

    return 0;
}