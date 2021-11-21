/*
Ot klaviaturata se vavezhdat posledovatelno nyakolko tseli polozhitelni chisla,
sled koeto se vavezhda chisloto nula. Sastavete algoritam i napishete programa,
koyato namira i izvezhda na ekrana broyat na chislata v nay-dalgata poreditsa ot
posledovatelni ravni chisla. Naprimer, ako vavedenite chisla sa (4, 5, 5, 6, 6, 6, 8, 0),
rezultatat tryabva da bade 3, zashtoto ima poreditsa ot tri posledovatelni ravni chisla (6, 6, 6) 
i tova e nay-dalgata poreditsa ot ravni chisla.

TODO - ne raboti s dwu/tricifreni
*/
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main(){

    char input[100] ;
    int combo=0, newCombo =0 , holder = 11;

    cout<<"Wywedete chislata: ";
    cin.getline(input,sizeof(input));

    for(int i = 0; i < strlen(input); i++ ){

        if(47 < input[i] && input[i] < 58 ){
            if(input[i]- 48 == holder){
                combo++;
            }
            else if(input[i] - 48 != holder){
                combo = 0;
            }
            holder = input[i] - 48;
        }
        if(combo>newCombo){
            newCombo = combo;
        }
        
    } 
    if(newCombo == 0){
        cout<<"Nqma";
    }
    else{
        cout<<"Nai dylgo posledowatelna redica e ot: "<<newCombo+1<<" cifri !";
        }




    //system("pause");
    return 0;
}
