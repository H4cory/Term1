/* Mecho Puh reshil da si otbelyazva kolko piti med izlapva za edin mesets. Vseki den toy otvarya po edin kosher,
 koyto sadarzha nay-mnogo 5 piti med. Bedata bila, che Puh ne znael chislata, zatova izpolzval negov si nachin
 za zapisvane. Toy otbelyazval 1 izlapana pita s tochka, 2 izlapani piti – sas simvola
 “^”, 3 – s “+”, 4 – s “*’ i 5 - s “x”. Ponyakoga kosherat se okazval prazen i togava Mecho Puh ostaval gladen.
 V kraya na mesetsa Puh ustanovil, che ne mozhe da presmetne kolko piti med e izlapal tozi mesets. Pomognete mu,
 kato sastavite algoritam i napishete programa, koyato poluchava otbelyazanite simvoli za mesetsa i namira broya
 izlapani piti ot Mecho Puh za mesetsa. Naprimer, ako Mecho Puh e otbelyazal *+^^..	, to broya na izlapanite
 piti e 13. 
 1 = .
 2 = ^
 3 = +
 4 = *
 5 = x
*/

#include <iostream>
#include <cstring>

using namespace std;

int main(){

    char Input[50];
    int br=0, sum=0;
    bool SpellCheck = false;

    cout<<"Wywedete kolko Piti Izlapahte dnes: "; 
    cin >>Input;
    br = strlen(Input);

    for(int i =0;i<br;i++){
        switch(Input[i]){

            case '.':
                sum +=1;
                break;
            case '^':
                sum +=2;
                break;
            case '+':
                sum +=3;
                break;
            case '*':
                sum +=4;
                break;
            case 'x':
                sum +=5;
                break;
            default: 
                SpellCheck = true;
                sum+=0;
        }
    }

    if(sum!=0){
        cout<<endl<<"Wie ste inskusumirali| "<<sum<<" |broq piti!"<<endl;
    }
    else{
        cout<<endl<<"Ne ste consumirali piti ?"<<endl;
    }
    
    if(SpellCheck){ 
        cout<<"\nImashe nepoznati simwuli wyw wywedeniqt text!!!\n";
    }
    //system("Pause");
    return 0;
}