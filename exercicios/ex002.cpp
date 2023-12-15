#include <iostream>

using namespace std;

int main()
{
    int pares = 0;
    int num;

    for(int i = 0; i < 5; i++)
    {
        cin >> num;

        if(num % 2 == 0)
        {
            pares++;
        }
    }

    cout << pares << " valores pares" << endl;
    
    return 0;
}