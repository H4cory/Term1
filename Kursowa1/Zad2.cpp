/*
Sastavete algoritam i napishete programa za namirane sredno aritmetichnoto na tselite polozhitelni chisla po-malki
ot a, koito sa kratni na 3 i zavarshvat na 1, 3, 5, 7.
*/

#include <iostream>
using namespace std;
int main(){
    long int a, Sum = 0 , LastDigit, Counter = 0;
    double Output;
    cout<<"Wywedete a: ";
    cin>>a;
    for(long int i = 0; i < a ; i++ ){
        if(i % 3 == 0){
            LastDigit= i % 10;
            if(LastDigit == 1 ||LastDigit == 3 ||LastDigit == 5 || LastDigit == 7 ){
                Sum = Sum + i;
                Counter ++;
            }
        }
    }
    if(Counter != 0){
        Output = Sum/Counter;
        cout<<"Sredno aritmetichnoto na chislata e: "<<Output<<endl;
    }
    else{
        cout<<"Nqma podhodqshti chisla"<<endl;
    }
    system("Pause");
    return 0;
}