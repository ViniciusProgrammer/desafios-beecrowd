#include <iostream>

using namespace std;

int main()
{
    int x, y, somaImpares = 0;

    cin >> x >> y;

    if(x < y)
    {
        for(int i = x + 1; i < y; i++)
        {
            if(i % 2 != 0)
            {
                somaImpares+= i;
            }
        }
    }
    else
    {
        for(int i = y + 1; i < x; i++)
        {
            if(i % 2 != 0)
            {
                somaImpares+=i;
            }
        }
    }

    cout << somaImpares << endl;

    return 0;
}