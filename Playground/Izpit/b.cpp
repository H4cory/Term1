/* Даден е статичен двумерен масив G с m реда и n стълба. Да се състави алгоритъм 
и напише програма, която създава нов статичен масив A, като стойността на Ai
 е равна на средно-аритметичното на ненулевите елементи в i-ия ред на G.*/

#include <iostream>

using namespace std;

int main(){

int G[100][100],m=0,n=0, sum=0,counter=0;
float A[100];

cout<<"Wywedte m/n:";
cin>>n>>m;

for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<"Wywedete G["<<i+1<<"]["<<j+1<<"]: ";
        cin>>G[i][j];
        if(G[i][j]!=0){
            sum=sum+G[i][j];
            counter++;
        }
    }
    A[i]=sum/counter;
    sum=0;
    counter=0;
}

for(int i =0;i<m;i++){
    cout<<"A["<<i+1<<"]= "<<A[i]<<endl;
}

 return 0;
}
