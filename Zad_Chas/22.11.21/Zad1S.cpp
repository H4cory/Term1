/*
Dadeni sa dva masiva a i b, koito sadarzhat katetite na m pravoagalni triagalnitsi.
Da se nameri nomera na triagalnika s nay-golyamo litse. Da se razraboti podprograma
za namirane na litse na pravoagalen triagalnik po zadadeni kateti.

//m = broi triygylnici
*/
#include <iostream>
using namespace std;

int maxSurface(int m, int a[], int b[])
{
    float maxSur = 0, br = 0;
    for (int i = 0; i < m; i++)
    {
        if ((a[i] * b[i]) / 2 > maxSur)
        {
            maxSur = (a[i] * b[i]) / 2;
            br = i + 1;
        }
    }
    return br;
}

int main()
{
    int a[100], b[100], m;

    cout << "Wywedete broi na triygylnici: ";
    cin >> m;

    cout << "Wywedtee masiwa:\n";
    for (int i = 0; i < m; i++)
    {
        cout << "a, b: ";
        cin >> a[i] >> b[i];
    }
    cout << "Nomera na triygylnika s nai golqmo lice e: " << maxSurface(m, a, b);

    return 0;
}