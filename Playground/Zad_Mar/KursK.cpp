/*
Stoynostite na K i L sa tseli chisla. Da se sastavi algoritam i napishe programa na c++
za uvelichavane na K s poslednata tsifra na L, kogato K i L ne sa ravni, ili za namalyavane
 na L s poslednata tsifra na K, kogato sa ravni.
*/

#include <iostream>

using namespace std;

int main(){
    int K, L, a;

    cout<<"Wywedete K i L: ";
    cin>>K>>L;


    if(K != L){
        a = L % 10; 
        K = K + a;
    }
    else if(K = L){
        a= K % 10;
        L = L- a;
    }
    else{
        cout<<"Greshka\n";
    }

    cout<<"Stoinosta na K: "<<K<<" i L: "<<L<<endl;
    return 0;
}