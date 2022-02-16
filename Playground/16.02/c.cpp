/*Във военна база пристига кодирано съобщение, което съдържа много важна информация.
 Съобщението се състои от думи и завършва с точка (думите в текста са разделени с един интервал).
  От текста трябва да се намери кодираното число, което е изключително ценно.
  То се получава като разлика между дължините на най-дългата и най-късата думи.
  Напишете програма, която намира търсеното число. */

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    string input;
    int counter = 0, min = INT_MAX, max = INT_MIN;

    cout << "Wywedte izrechenie: " << endl;
    getline(cin, input);

    for (int i = 0; input.length() > i; i++)
    {

        if (input[i] != ' ' && input[i] != '.')
        {
            counter++;
        }
        else
        {
            if (counter > max)
                max = counter;
            if (counter < min)
                min = counter;
            counter = 0;
        }
    }

    cout << max - min;
    return 0;
}