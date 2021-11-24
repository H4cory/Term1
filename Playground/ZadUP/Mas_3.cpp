/*
Da se napishe programa, koyato zapalva dvumeren masiv s n reda i
n stalba po pokazaniya nachin.
    1  2  3  4
    12 13 14 5
    11 16 15 6
    10 9  8  7
 
 Cwetowi gami
*/
#include <iostream>
using namespace std;

void takeInput(int* red, int* kol){
 cout<<"Wywedete Redowe i Koloni: ";
 cin>>*red>>*kol;
}

void fillArr(int* red, int* kol, int block[100][100]){
    int counter = 0, Red, Kol, offsetRed =0, offsetKol =0, maxCounter =0;
    bool loop = true;
    Red = *red;
    Kol = *kol;
    maxCounter= Red * Kol;

    while(loop){

    //Pyrwi
    for(int i = 0 + offsetRed;i < Kol - offsetRed ; i++){
     block[offsetRed][i] = ++counter;
     if(maxCounter == counter){
         loop = false;
         break;
     }
    }
    if(!loop){
        break;
    }

    //Wtori
    for(int i = 1 + offsetKol;i < Red - offsetKol; i++){
     block[i][Kol-1-offsetKol] = ++counter;
      if(maxCounter == counter){
         loop = false;
         break;
     }
    }
    if(!loop){
        break;
    }


    //Treti
    for(int i = Kol-2 - offsetRed ;i != -1 + offsetRed;i--){
     block[Red-1-offsetRed][i] = ++counter; 
      if(maxCounter == counter){
         loop = false;
         break;
     }
    }
    if(!loop){
        break;
    }
    offsetRed++;


    //Chetwyrti
    for(int i = Red -2- offsetKol;i != 0 + offsetKol ; i--){
     block[i][offsetKol] = ++counter;
      if(maxCounter == counter){
         loop = false;
         break;
     }
    }
    if(!loop){
        break;
    }
    offsetKol++;
  


    }   
}

void visArr(int* red, int* kol, int block[100][100]){
 for(int i =0 ;i<*red; i++){
     cout<<"| ";
     for(int f = 0 ;f<*kol;f++){
         if(block[i][f]< 10) cout<<' '<<block[i][f]<<"  ";
         else if(block[i][f]>= 10&&block[i][f] <100) cout<<block[i][f]<<"  ";
         else cout<<block[i][f]<<" ";
     }
     cout<<'|'<<endl;
 }
}

int main(){
 int block[100][100], red, kol;
 bool loop = true;

 takeInput(&red, &kol);
 fillArr(&red, &kol, block);
 visArr(&red, &kol, block);

 return 0;
}