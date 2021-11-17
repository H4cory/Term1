/*
Tya predlaga na priyatelkata si Maya da igrayat na slednata igra: Mira postavya prastta si na nyakoy buton
i go plazga nadyasno ili nadolu na sasedniya mu buton, a Maya da kazhe koi sa sasednite butoni na posledno
posocheniya buton, koito sa razpolozheni nadyasno i nadolu, na koito mozhe da si plazne prastta, bez da go vdiga.
Naprimer, ako Mira postavi prastta si na 7 i go plazne na buton 8, Maya tryabva da otgovori 9 i 0. Ako Mira postavi
prastta si na 2 i go plazne na buton 3, Maya tryabva da posochi 6. Da se sastavi algoritam i napishe programa, koyato
po posocheni dva butona ot Mira, izvezhda koi sa sasednite mu butoni, koito Maya tryabva da posochi. Ako nyama takiva
butoni, programata da izvede simvola #. Ako ima dva sasedni butona, programata izvezhda parvo desniya, a sled tova
butonat, koyto se namira otdolu.
*/

#include <iostream>

using namespace std;

int main(){
    int KeyPad[4][3], x= 0, y = 0, br=1;

    KeyPad[3][0] = 9;
    KeyPad[3][1] = 0;
    KeyPad[3][2] = 9;
    for(int i =0;i<3;i++){
        for(int f = 0; f<3;f++){
            KeyPad[i][f] = br;
            br++;
        }
    }



    cout<<"Klawiaturata na telefona: \n\n";
    for(int i=0;i<4;i++){
        cout<<" | ";
        for(int f=0;f<3;f++){
            if(KeyPad[i][f]==9&&i==3&&(f==0||f==2)){
                cout<<"  ";   
            } 
            else{
                cout <<KeyPad[i][f]<<' ';
            }  
        }
        cout<<" | ";
        cout<<endl;
    }

    cout<<"Wywedete koi buton iskate da izberete: ";





    //system("pause");
    return 0;
}