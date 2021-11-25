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
    int counter = 0, Red, Kol, offset =0, maxCounter =0;
    bool loop = true;
    Red = *red;
    Kol = *kol;
    maxCounter= Red * Kol;

    while(loop){

    //Pyrwi
    for(int i = 0 + offset;i < Kol - offset ; i++){
     block[offset][i] = ++counter;
     if(maxCounter == counter){
         loop = false;
         break;
     }
    }
    if(!loop){
        break;
    }
    //Wtori
    for(int i = 1 + offset;i < Red - offset; i++){
     block[i][Kol-1-offset] = ++counter;
      if(maxCounter == counter){
         loop = false;
         break;
     }
    }
    if(!loop){
        break;
    }
    //Treti
    for(int i = Kol-2 - offset ;i != -1 + offset;i--){
     block[Red-1-offset][i] = ++counter; 
      if(maxCounter == counter){
         loop = false;
         break;
     }
    }
    if(!loop){
        break;
    }
    //Chetwyrti
    for(int i = Red -2- offset;i != 0 + offset ; i--){
     block[i][offset] = ++counter;
      if(maxCounter == counter){
         loop = false;
         break;
     }
    }
    if(!loop){
        break;
    }
    offset++;
    }   
}

void visArr(int* red, int* kol, int block[100][100]){
 int max = 0;
 max =*red * *kol;

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