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
#include <stdlib.h>
#include <windows.h>

using namespace std;

int main(){

    //Declaraciq na promenliwi
    char SaveInput[100];
    int Input = 1, Recovery = 1, Counter = 1;
    bool Loop = true, Case[10], SkipInput=false, SkipIf = false, SkipVis = false, ValidInp = false;

    fill(Case,Case+10,true);

    //Poqsnitelen Tekst
    {
        SetConsoleTextAttribute( GetStdHandle(STD_OUTPUT_HANDLE), 2);
        cout<<"ZELENO";
        SetConsoleTextAttribute( GetStdHandle(STD_OUTPUT_HANDLE), 7);
        cout<<" oznachawa che moje da plyznete tam, ";
        SetConsoleTextAttribute( GetStdHandle(STD_OUTPUT_HANDLE), 4);
        cout<<"CHERWENO";
        SetConsoleTextAttribute( GetStdHandle(STD_OUTPUT_HANDLE), 7);
        cout<<" oznachawa che prysta wi e wyrhu cifrata!\n\n";
    }

    //Cikyl za programata
    while(Loop){

        //Blok za Visualizaciq
        Counter = 1 ;
        if(!(SkipVis)){
        for(int i=0;i<4;i++){
                cout<<" | ";
                for(int f=0;f<3;f++){

                    if(Counter==10||Counter==12){
                        cout<<"  ";
                    }
                    else if(Counter == 11){
                        if(Case[0]){
                            SetConsoleTextAttribute( GetStdHandle(STD_OUTPUT_HANDLE), 2);
                            cout<<"0 ";
                            SetConsoleTextAttribute( GetStdHandle(STD_OUTPUT_HANDLE), 7);
                        }
                        else{
                            cout<<"0 "; 
                        }
                    }
                    else{
                        if(Case[Counter]){
                            SetConsoleTextAttribute( GetStdHandle(STD_OUTPUT_HANDLE), 2);
                            cout<<Counter<<' ';
                            SetConsoleTextAttribute( GetStdHandle(STD_OUTPUT_HANDLE), 7);
                        }
                        else if(Counter == Input){
                            SetConsoleTextAttribute( GetStdHandle(STD_OUTPUT_HANDLE), 4);
                            cout<<Counter<<' ';
                            SetConsoleTextAttribute( GetStdHandle(STD_OUTPUT_HANDLE), 7);
                        }
                        else{
                            cout<<Counter<<' ';
                        }
                    }
                    Counter++;
                }
                cout<<" | ";
                cout<<endl;
            }   
        }
        SkipVis = false;

        //Whod + SkipInput pri greshen whod
        if(!(SkipInput)){
            cout<<"\nWywedete koi buton iskate da izberete: ";
            Recovery = Input;
            cin>>SaveInput;
            Input = SaveInput[0] - 48;
            if(Input > 10) SkipIf = true;

        }
        SkipInput=false;

        //Skip na prowerka na whoda
        if(SkipIf){
            cout<<"Greshen Hod !"<<endl;
            fill(Case,Case+10,true);
            if(ValidInp){
                SkipInput= true;
                Input = Recovery;
                SkipVis = true;   
            }
        }

        //Prowerka za whoda i izhod
        else{
            ValidInp = true; 
            cout<<endl;
            if(Input==1&&Case[1]){
                cout<<"Mojete da plyznete na 2 i 4 ! "<<endl;
                fill(Case,Case+10,false);
                Case[2] = true;
                Case[4] = true;
                
            }
            else if(Input==2&&Case[2]){
                cout<<"Mojete da plyznete na 3 i 5 ! "<<endl;
                fill(Case,Case+10,false);
                Case[3] = true;
                Case[5] = true;
            }
            else if(Input==3&&Case[3]){
                cout<<"Mojete da plyznete na 6 ! "<<endl;
                fill(Case,Case+10,false);
                Case[6] = true;
            }
            else if(Input==4&&Case[4]){
                cout<<"Mojete da plyznete na 5 i 7 ! "<<endl;
                fill(Case,Case+10,false);
                Case[5] = true;
                Case[7] = true;
            }
            else if(Input==5&&Case[5]){
                cout<<"Mojete da plyznete na 6 i 8 ! "<<endl;
                fill(Case,Case+10,false);
                Case[6] = true;
                Case[8] = true;
            }
            else if(Input==6&&Case[6]){
                cout<<"Mojete da plyznete na 9 ! "<<endl;
                fill(Case,Case+10,false);
                Case[9] = true;
            }
            else if(Input==7&&Case[7]){
                cout<<"Mojete da plyznete na 8 ! "<<endl;
                fill(Case,Case+10,false);
                Case[8] = true;
            }
            else if(Input==8&&Case[8]){
                cout<<"Mojete da plyznete na 0 ! "<<endl;
                fill(Case,Case+10,false);
                Case[0] = true;
            }
            else if(Input==9&&Case[9]){
                cout<<"Ne moje da se mestite poweche! "<<endl;
                Loop = false;
            }
            else if(Input==0&&Case[0]){
            cout<<"Ne moje da se mestite poweche! "<<endl;
                Loop = false;
            }
            else{
            cout<<"Greshen Hod !"<<endl;
            SkipInput= true;
            Input = Recovery;
            fill(Case,Case+10,true);
            SkipVis = true;
        }
        }
        SkipIf = false;
        
    }

    //system("PAUSE");
    return 0;
}