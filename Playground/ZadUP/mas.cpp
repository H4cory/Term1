/*
Da se napishe programa, koyato zapalva dvumeren masiv s n reda i
n stalba po pokazaniya nachin.
    1  2  3  4
    12 13 14 5
    11 16 15 6
    10 9  8  7
 

 Neraboti/ zapochni na nowow ?
 
*/

#include <iostream>
using namespace std;

int main(){

 int myArr[100][100],red = 0, kol = 0, counter = 2, offsetKol = 0, offsetRed = 0  ;
 bool loop = true;

 
 //whod na dannite
 cout<<"Wywedete Redowete i Kolonite na matricata: ";
 cin>>red>>kol;
 

 //input na masiwa
 myArr[0][0] = 1 ; 
 while(loop){
     //PYRWI
    for(int i = 1;i < kol - offsetKol ;i++){
        myArr[offsetKol][i] = counter;
        counter++;
        if(counter == red*kol +1){
        loop = false;
        break;
        } 
    }
    if(!loop){
        break;
    }
     offsetKol++;
    //WTORI
    for(int i =1; i< red - offsetRed ; i++){
        myArr[i + offsetKol -1][kol-offsetKol] = counter;
        counter++;
        if(counter == red*kol +1){
        loop = false;
        break;
        } 
    }
    if(!loop){
        break;
    }
    offsetRed++;

   //TRETI
    for(int i = kol - 1 - offsetKol ; i > offsetKol -1 ; i--){
        myArr[red -1][i] = counter;
        counter++;
        if(counter == red*kol +1){
        loop = false;
        break;
        } 
    }
    if(!loop){
        break;
    }
    offsetKol++;

    //CHETWYRTI
    for(int i = red- 1 - offsetRed ;i > offsetRed -1;i--){
        myArr[i][-1 + offsetRed] = counter;
        counter++;
        if(counter == red*kol +1){
        loop = false;
        break;
        } 
    }
    if(!loop){
        break;
    }
    offsetRed++;
  }

 //wizualizaciq na masiwa
 for(int i =0 ;i<red; i++){
     cout<<"| ";
     for(int f = 0 ;f<kol;f++){
         if(myArr[i][f]< 10) cout<<myArr[i][f]<<"  ";
         else cout<<myArr[i][f]<<' ';
     }
     cout<<'|'<<endl;
 }

  

    //system("Pause");
    return 0;
}
