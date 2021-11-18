#include <iostream>

using namespace std;

int main(){

    int Arr[1000], br= 0;

   for(int i = 0; i < 10 ;i++){
       cout<<i<<':';
       cin>>Arr[i];
       br++;
   }

   for(int i = 0; i < 10 ;i++){

       if(Arr[i] % 2 == 0){
        cout<<Arr[i]<<endl;
       }
       
   }

   
    

    return 0;
}