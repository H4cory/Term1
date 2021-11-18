#include <iostream>

using namespace std;

int main(){

    int Arr[1000], ArrLen=0;

    cout<<"Wywedete kolko golqm iskate da e masiwa: "; 
    cin>>ArrLen;
    
    for(int i = 0; i < ArrLen ;i++){
        cout<<"Wywedete stoinosta na "<<i+1<<" broi w masiwa: ";
        cin>>Arr[i];
       
    }

   for(int i = 0; i < ArrLen ;i++){
       cout<<Arr[i]<<", ";
   }


    return 0;
}