/* Zadacha 4. Daden e dvumeren masiv A s m reda i m stalba. Da se sastavi algoritam i napishe
programa, koyato namira broya na polozhitelnite elementi po glavniya diagonal na A. */

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int MyArr[100][50],n=0,m=0, VerArr[50];

    cout<<"Wywedete broi na Stylbowe(I Redowe):  "; cin >> m;
    n = m;

    for(int i=0;i<m;i++){
        for(int f=0;f<n;f++){
            cout <<"Wywedete masiw["<<f+1<<"]["<<i+1<<"]: "; 
            cin >> MyArr[f][i];          
        }
        VerArr[i]=MyArr[i][i];
    }
    cout<<"Masiwyt izglevda taka: \n";
    for(int i=0;i<m;i++){
        for(int f=0;f<n;f++){
            cout <<MyArr[f][i]<<' ';          
        }
        cout<<endl;
    }
    cout<<"Diagonala na masiwa e: ";
    for(int i=0; i<m;i++ ){
        cout<<VerArr[i]<<' ';
    }

   
    //system("Pause");
    return 0;
}