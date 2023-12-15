#include <iostream>

using namespace std;

int main()
{
    int numero_casos;
    double nota;

    cin >> numero_casos;

    for(int i = 0; i < numero_casos; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> nota;
        }   
    }
    return 0;
}