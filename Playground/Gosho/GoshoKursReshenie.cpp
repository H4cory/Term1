/*
Wywjadane na grafika
min broi istreli

wywejdane na cordinati za istreli

broi uspeshni istreli{

}

izkarwa kordinatite na ucelenite

*/

#include <iostream>
#include <math.h>

using namespace std;

int main(){

    float KvaPo, KvaDi, r, x[100], y[100];
    int M, N, UcIz = 0,NeUcIz = 0, BrIz=0, BrUcIz[100] ;
    bool loop = true;

    cout<<"Wywedete a: ";
    cin>>KvaPo;
    

    cout<<"Wywedete r: ";
    cin>>r;

    cout<<"Wywedete Min broi istreli (M): ";
    cin>>M;

    cout<<"Wywedete Min broi uceleni iztreli (N): ";
    cin>>N;

    
    while(loop){

        cout<<"Wywedete x: "; 
        cin>>x[BrIz];
        cout<<"Wywedete y: "; 
        cin>>y[BrIz];

        if(r>= sqrt(pow(x[BrIz],2)+pow(y[BrIz],2))){

                if( (y[BrIz] <= -x[BrIz]) ){
                    if(x[BrIz]<= -KvaPo || y[BrIz]<= -KvaPo){
                        cout<<"Popadenie w zashtrihowanta! \n";
                    // BrUcIz[UcIz] = BrIz; 
                        UcIz++;
                    }
                }
                if(!((y[BrIz] <= -x[BrIz])) || !(x[BrIz]<= -KvaPo || y[BrIz]<= -KvaPo)){
                        cout<<"Popadenie w NE-zashtrihowanta! \n";
                        BrUcIz[NeUcIz] = BrIz;
                        NeUcIz++; 
                }

        }
        else{
            cout<<"Ne e wytre w kryga! \n";
        }
        BrIz++;
        cout<<endl;

        if(BrIz >= M && UcIz >= N  ){
        loop = false;
        }
    }

    cout<<"Popadeniqta sa: \n";

    for(int i = 0;i < NeUcIz ;i++){
        cout<<"x: "<<x[BrUcIz[i]]<<" y: "<<y[BrUcIz[i]]<<endl;
    }

    system("pause");
    return 0;
}