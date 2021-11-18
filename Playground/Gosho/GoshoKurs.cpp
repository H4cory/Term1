/*
Wywjadane na grafika
min broi istreli

wywejdane na ordinati za istreli

broi uspeshni istreli{

}

izkarwa kordinatite na ucelenite

kod na gosho
*/
#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    int StrKva;
    cin >> StrKva;
    int PolKva = StrKva / 2;
    int r;
    cin >> r;
    int DiaKva = sqrt(2 * StrKva * StrKva);

    if (DiaKva < 2 * r)
    {
        int MinToch, OcToch;
        cin >> MinToch;
        cin >> OcToch;

        for (int i = 0; i < MinToch && i < OcToch; i++)
        {
            int x, y;
            cin >> x;
            cin >> y;
            if (x <= abs(r) && y <= abs(r))
            {
                if (y > -x)
                {
                    cout << "tochka ima";
                }
                if (x <= abs(PolKva) && y <= abs(PolKva))
                {
                    cout << "tochka ima";
                }
            }
            cout << "tochkite ne sa na grafikata";
        }

        cout << "nqma poweche tochki";
    }

    else
    {
        cout << "grafikata e greshna";
    }

    system("pause");
    return (0);
}