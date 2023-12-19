#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int total = 0;
    int quantidade, coelhos = 0, ratos = 0, sapos = 0;
    char letra;

    cin >> quantidade;

    for(int i = 0; i < quantidade; i++)
    {
        int n;

        cin >> n >> letra;

        if(letra == 'C' || letra == 'c')
        {
            coelhos+= n;
            total+=n;
        }
        else if(letra == 'R' || letra == 'r')
        {
            ratos+= n;
            total+=n;
        }
        else if(letra == 'S' || letra == 's')
        {
            sapos+= n;
            total+=n;
        }
    }
    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << coelhos << endl;
    cout << "Total de ratos: " << ratos << endl;
    cout << "Total de sapos: " << sapos << endl;
    cout << fixed << setprecision(2) << "Percentual de coelhos: " << (float)coelhos/total* 100 << " %" << endl;
    cout << fixed << setprecision(2) << "Percentual de ratos: " << (float)ratos/total* 100 << " %" << endl;
    cout << fixed << setprecision(2) << "Percentual de sapos: " << (float)sapos/total * 100 << " %" << endl;

    return 0;
}