/*
Funktsiya za sortirane na masiv po izbran metod ot vas i glavna programa

funciq za izkarwane na podreden po golemina masiw arr
*/

#include <iostream>
using namespace std;

void sorter(int br, int arr[])
{
    int i, j, t;
    for (i = 0; i < br - 1; i++)
        for (j = 0; j < br - i - 1; j++)
            if (arr[j] > arr[j + 1])
            {
                t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }

    cout<<"\nPo golemina: ";
    for (int i = 0; i < br; i++)
    {
        cout << arr[i] <<' ';
    }
}

int main()
{
    int arr[1000], br = 0;

    cout << "Wywedete goleminata na massiwa: ";
    cin >> br;
    cout << "Wywedtee masiwa: \n";

    for (int i = 0; i < br; i++)
    {
        cout << i + 1 << ": ";
        cin >> arr[i];
    }

    sorter(br, arr);

    return 0;
}