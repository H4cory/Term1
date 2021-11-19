/*
wywede znaci
razchete znaka
da proweri stoinosta
da izkara stoinost

. = 1
^ =2
+ = 3
* = 4
x = 5

*/
#include <iostream>
using namespace std;

int main(){

    char a[100];
    int sum=0;



    cout<<"Wywedete pitite: ";
    cin>> a;
     
    for(int i = 0 ;  i < 100; i++){

        if(a[i] == '.'){
            sum = sum +1;

        }
        
        if(a[i] == '^' ){
            sum += 2;

        }
    
    }
    cout<<"Sumata e: "<<sum;


    //system("pause");
    return 0;
}
// int Arr[10]
// 0 1 2 3 4 5 6 7 8 9 
// c c c c c c c c c c
// . . . . 0 0 0 0 0 0