/*
Da se napishe programa, koyato zapalva dvumeren masiv s n reda i
n stalba po pokazaniya nachin.
    1  2  3  4
    12 13 14 5
    11 16 15 6
    10 9  8  7
 
*/

#include <iostream>
using namespace std;

int main(){

 int myArr[100][100],red = 0, kol = 0, counter = 2, offset = 0  ;
 bool loop = true;

 
 //whod na dannite
 cout<<"Wywedete Redowete i Kolonite na matricata: ";
 cin>>red>>kol;
 

 //input na masiwa
 while(loop){
    myArr[0][0] = 1 ; 
    for(int i = 1;i < kol - offset ;i++){
        myArr[offset][i] = counter;
        counter++;
    }
    offset++;
    if(counter == red*kol +1){
     loop = false;
     break;
    } 
    for(int i =1; i< red ; i++){
        myArr[i][kol-offset] = counter;
        counter++;
    }
    for(int i = kol - 1 - offset ; i > -1 ; i--){
        myArr[red-offset][i] = counter;
        counter++;
    }
    for(int i = red- 1 - offset ;i > offset -1;i--){
        myArr[i][0] = counter;
        counter++;
    }
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
