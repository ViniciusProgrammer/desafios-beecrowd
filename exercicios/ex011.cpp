#include <iostream>
#include <cstring>

int main()
{
    char tipo[20], especie[20], categoria[20];
    
    std::cin.getline(categoria, 20);
    std::cin.getline(especie, 20);
    std::cin.getline(tipo, 20);

    if(categoria[0] == 'v')
    {
        if(especie[0] == 'a')
        {
            if(tipo[0] == 'c')
            {
                std::cout << "aguia" << std::endl;
            }
            else if(tipo[0] == 'o')
            {
            std::cout << "pomba" << std::endl;
            }
        }
        else if(especie[0] == 'm')
        {
            if(tipo[0] == 'o')
            {
                std::cout << "homem" << std::endl;
            }
            else if(tipo[0] == 'h')
            {
                std::cout << "vaca" << std::endl;
            }
        }
    }
    else if(categoria[0] == 'i')
    {
        if(especie[0] == 'i')
        {
            if(tipo[2] == 'm')
            {
                std::cout << "pulga" << std::endl;
            }
            else if(tipo[2] == 'r')
            {
                std::cout << "lagarta" << std::endl;
            }
        }
        else if(especie[0] == 'a')
        {
            if(tipo[0] == 'h')
            {
                std::cout << "sanguessuga" << std::endl;
            }
            else if(tipo[0] == 'o')
            {
                std::cout << "minhoca" << std::endl;
            }
        }
    }

    return 0;
}