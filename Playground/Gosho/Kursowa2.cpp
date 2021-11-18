/*
Sastavete algoritam i napishete programa za vavezhdane koordinatite na tochki
i izvezhdane na ekrana koordinatite na onezi ot tyah, koito ne vlizhat v zashtrihovanata oblast.
Vavezhdaneto se prekratyava, kogato broyat vavedenite tochki stane nay-malko M i broyat na
lezhashtite v zashtrihovanata oblast stane N.

dali e v samiq krug
toest
-r<= na x[ili y] <= r
*/

#include <iostream>

using namespace std;

int main(){

    float Kva, Rad, Iztreli[100][2];
    int BrMin = 0, BrOc = 0;

    cout<<"Wywedete Radiusa na kryga R: ";
    cin>>Rad;

    cout<<"Wywedete polowinkata na strana na Kwadrata: ";
    cin>>Kva;
    Kva *= 2;

    cout<<"Wywedete broi minimlani iztreli: ";
    cin>>BrMin;



    return 0;
}// tazi zadacha ima neshto ne ok, ostawqm za posle