#include <iostream>
#include <stdlib.h>


//izkarwa chislata na koito cifrite sa podredeni po golemina
using namespace std;
int main() {
  int i,K,M,N,newC,oldC;
  system("chcp 1251");
    cout<<"Задайте началното число: ";cin>>M;
    cout<<" Задайте крайното число: "; cin>>N;
    for ( i=M; i<=N; i++ ){
       K=i; newC=K % 10;
       do {
	    oldC=newC;
	    K=K / 10;
	    newC=K % 10;
       }while (K!=0&&newC<oldC); 
       if (K==0) cout<<i<<endl;
     } 
     cout<<"\n";
     return 0;
}
