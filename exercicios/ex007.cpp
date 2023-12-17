#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    float a, b, c, media = 0.0;

    cin >> n;
    float medias[n];

    for(int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        medias[i] = (a * 2 + b * 3 + c * 5) / 10;
    }

    for(int i = 0; i < n; i++)
    {
        cout << fixed << setprecision(1) << medias[i] << endl;
    }

    return 0;
}