/*
Задача 1.3. Напишете програма, която въвежда от клавиатурата
редица от символи и извежда на екрана първия символ в редицата,
който се среща само един път. Броят на символите може да бъде
най-малко 1 и най-много 80. Ако няма такъв символ, програмата трябва да изведе NO.
*/
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char a[100];
    bool check = true;
    cout << "Wywedete simwoli: ";
    cin >> a;

    if (strlen(a) < 1 && strlen(a) > 80)
    {
        cout << "Prekaleno malko ili mnogo simwoli!";
        exit(0);
    }

    for (int i = 0; i < strlen(a); i++)
    {
        check = true;

        for (int f = 0; f < strlen(a); f++)
        {
            if (a[i] == a[f] && i != f)
            {
                check = false;
                break;
            }
        }
        if (check)
        {
            cout << a[i];
            break;
        }
    }

    // system("Pause");
    return 0;
}