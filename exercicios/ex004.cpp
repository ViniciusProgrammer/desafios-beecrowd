#include <iostream>

using namespace std;

int main()
{
    int i, num, pares = 0, impares = 0, positivos = 0, negativos = 0;

    for(i = 0; i < 5; i++)
    {
        cin >> num;

        if(num % 2 == 0)
        {
            pares++;
            
            if(num > 0)
            {
                positivos++;
            }
            else if(num < 0)
            {
                negativos++;
            }
        }
        else
        {
            impares++;

            if(num > 0)
            {
                positivos++;
            }
            else if( num < 0)
            {
                negativos++;
            }
        }
    }

    cout << pares << " valor(es) par(es)" << endl;
    cout << impares << " valor(es) impar(es)" << endl;
    cout << positivos << " valor(es) positivo(s)" << endl;
    cout << negativos << " valor(es) negativo(s)" << endl;

    return 0;
}