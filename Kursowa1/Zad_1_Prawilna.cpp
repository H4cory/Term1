/*
Tya predlaga na priyatelkata si Maya da igrayat na slednata igra: Mira postavya prastta si na nyakoy buton
i go plazga nadyasno ili nadolu na sasedniya mu buton, a Maya da kazhe koi sa sasednite butoni na posledno
posocheniya buton, koito sa razpolozheni nadyasno i nadolu, na koito mozhe da si plazne prastta, bez da go vdiga.
Naprimer, ako Mira postavi prastta si na 7 i go plazne na buton 8, Maya tryabva da otgovori 9 i 0. Ako Mira postavi
prastta si na 2 i go plazne na buton 3, Maya tryabva da posochi 6. Da se sastavi algoritam i napishe programa, koyato
po posocheni dva butona ot Mira, izvezhda koi sa sasednite mu butoni, koito Maya tryabva da posochi. Ako nyama takiva
butoni, programata da izvede simvola #. Ako ima dva sasedni butona, programata izvezhda parvo desniya, a sled tova
butonat, koyto se namira otdolu.

Postawqsh prysta si i trqbwa da otide pyrwo na dqsno i posle na lqwo. ako kyde drugade da otide da izkara #

*/

#include <iostream>
using namespace std;

int main()
{
    int Input = 0;

    cout << "Izberete kyde da postawite prysta si: ";
    cin >> Input;

    if (Input == 0)
    {
        cout << '#' << endl;
    }

    else if (Input == 1)
    {
        cout << "2 & 4" << endl;
    }

    else if (Input == 2)
    {
        cout << "3 & 5" << endl;
    }
    else if (Input == 3)
    {
        cout << '6' << endl;
    }

    else if (Input == 4)
    {
        cout << "5 & 7" << endl;
    }

    else if (Input == 5)
    {
        cout << "6 & 8" << endl;
    }

    else if (Input == 6)
    {
        cout << '9' << endl;
    }
    if (Input == 7)
    {
        cout << '8' << endl;
    }
    if (Input == 8)
    {
        cout << "0 & 9" << endl;
    }
    if (Input == 9)
    {
        cout << '#' << endl;
    }
    system("PAUSE");
    return 0;
}