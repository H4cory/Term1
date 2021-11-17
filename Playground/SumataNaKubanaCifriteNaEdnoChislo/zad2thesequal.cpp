#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

//Prowerqwa dali chislata se delqt na cifrite si bez ostatyk

int main(){
    int n=0,a,i=1,c;
    float b =  0;
    cout<<"Wywedete N:"; cin>>n;
 
   while(n!=i){
        c=i; 
        while(c!=0){
            a=c%10; 
            if(a!=0) b += i % a; 
            else b+=1;
            if(b!=0) break;
            c/=10;
       }

         if(b==0){
        cout<<"Chisloto e: "<<i<<endl;
        }
        i++; 
        b=0;
        }
        cout<<"@@@@KRAI@@@@"<<endl;

    system("pause");
    return 0;
}


