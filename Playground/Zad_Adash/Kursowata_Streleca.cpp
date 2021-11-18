//kodyt e ot adasha az modificiram
//zadacha za strelec

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float Iztreli[100][2];
    float Kvadrat = 0, Rad = 0, e;
    bool Loop=true;
    int br=0;
        cout << "vuvedete golemina na kvadrata A="; cin >> Kvadrat;
        cout << "vuvedete golemina na kruga R="; cin >> Rad;

       while(Loop){
        cout << "Wywedete x="; cin >> Iztreli[br][0];
        cout << "Wywedete y="; cin >> Iztreli[br][1];

        if(Iztreli[br-1][0] == Iztreli[br][0] && Iztreli[br-1][1] == Iztreli[br][1])
        {
            Loop = false;
        }
        
        br++;
       }

       for(int i = 0 ;i < br ;i++){

        e = sqrt(pow(Iztreli[i][0], 2) + pow(Iztreli[i][1], 2));
		if (e <= Rad) cout<<"Iztrel s kordinati "<< Iztreli[i][0]<<' '<<Iztreli[i][1]<<" e uzelil maikati\n";;

       }



       /*
        e = sqrt(pow(Iztreli[br][0], 2) + pow(Iztreli[br][1], 2));
		if (e <= Rad) cout << "10 tochki \n";
		else if (Iztreli[br][0] <= Kvadrat && Iztreli[br][1] <= Kvadrat) cout  << "5 tochki\n";
		else cout << "0 tochki\n";
*/
        system("Pause");
        return 0; 

}