/*
Sastavete algoritam i napishete programa za namirane sredno aritmetichnoto na tselite polozhitelni chisla po-malki
ot a, koito sa kratni na 3 i zavarshvat na 1, 3, 5, 7.
*/

#include <iostream>

using namespace std;

int main(){

    long int a, Holder , LastDigit;

    cout<<"Wywedete a:";
    cin>>a;

    for(long int i = 1; i < a ; i++ ){
        if(i %3 == 0){
            LastDigit= i % 10;
            if(LastDigit == 1 ||LastDigit == 3 ||LastDigit == 5 || LastDigit == 7 ){
                cout<<i<<" - e kratno na 3 i poslednata cifra e 1,3,5 ili 7 \n";
            }
        }
    }

    //system("Pause");
    return 0;
}