#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int positivos = 0;
    float media = 0.0, num;

    for(int i = 0; i < 6; i++)
    {
        cin >> num;

        if(num > 0)
        {
            positivos++;
            media += num;
        }
    }

    media = media/positivos;

    cout << positivos << " valores positivos" << endl;
    cout << fixed << setprecision(1) << media << endl;

    return 0;
}
