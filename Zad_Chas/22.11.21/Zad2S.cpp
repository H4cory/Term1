/*
Zadadeni sa koordinatite x i y na n tochki. Posledovatelno saedineni te obrazuvat
nachupena liniya, sastavena ot n-1 otsechki. Da se napishe programa za namirane obshtata
dalzhina na nachupenata liniya i nomera na nay-dalgata otsechka. Programata da vklyuchva
slednite funktsii:
- funktsiya za vavezhdane na ednomeren masiv;
- funktsiya za namirane na razstoyanieto mezhdu dve tochki;
- funktsiya za namirane nay-golyam element v ednomeren masiv.

n= breoi tochki
*/

#include <iostream>
#include <math.h>
using namespace std;

void inputArr(int n, int x[], int y[])
{
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ". x & y : ";
        cin >> x[i] >> y[i];
    }
}

void distance(int n, int x[], int y[], int obshDal[])
{
    for (int i = 0; i < n - 1; i++)
    {
        obshDal[i] = sqrt(pow((x[i + 1] - x[i]), 2) + pow((y[i + 1] - y[i]), 2));
    }
}

int sort(int n, int obshDal[])
{
    int max = 0, br;
    for (int i = 0; i < n -1 ; i++)
    {
        if (obshDal[i] > max)
        {
            max = obshDal[i];
            br = i + 1;
        }
    }
    return br;
}
// namiram nai dylgata oysechka tuk
// smqtam che raboti

int main()
{
    int x[100], y[100], n = 0, obshDal[100], sum = 0;

    cout << "Wywedete broin tochki: ";
    cin >> n;

    cout << "Wywedete masiwa: \n";

    inputArr(n, x, y);
    distance(n, x, y, obshDal);

    for (int i = 0; i < n - 1; i++)
    {
        sum = sum + obshDal[i];
    }

    cout << "Obshtata golemina na ostechkata e: " << sum << endl;
    cout << "Nai dylgata otsechka e: " << sort(n, obshDal) << endl;

    return 0;
}
