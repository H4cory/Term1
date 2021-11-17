/*
6) Daden e dvumeren masiv s m reda i n stalba. Za vseki stalb da 
se nameri elementat s nay-malka stoynost. Da se nameri sled 
tova  nay-golyamata  sred  tezi  stoynosti,  kakto  i  nomera  na 
stalba v koyto se namira tya.

*/

#include <iostream>

using namespace std;

int main(){
    int MyArr[100][100], n=0, m=0, Arr[100][2], Min = 9999, br=0,Red; 


    //Wywejdame matricata
    cout<<"Wywedete  M reda i N stylba: "; cin  >> m >> n;
    for(int i = 0;i< n ;i++ ){
        cout<<endl;
        Arr[i][0]=9999;
        for(int f=0;f< m ;f++){
            cout<<"Wywedete Arr["<<f+1<<"]["<<i+1<<"]: ";
            cin>>MyArr[f][i];
            if(Arr[i][0]>MyArr[f][i]){
                Arr[i][0] = MyArr[f][i];
                Arr[i][1] = f;   
            }
        }
    }

    //Izkarwa matricata (za prilejnost)
    cout<<"Masiwyt izglejda taka: \n";
    for(int i=0;i<m;i++){
        cout<<i+1<<". | ";
        for(int f=0;f<n;f++){
            cout <<MyArr[i][f]<<' ';          
        }
        cout<<" | ";
        cout<<endl;
    }

    for(int i = 0; i<n;i++){
        if(Min>Arr[i][0]){
            Min = Arr[i][0];
            Red = Arr[i][1] + 1; 
        }
    }

    cout<<"Nai malkoto chislo ot masiwa e: |"<< Min<<"| na red: |"<<Red<<'|';

    system("Pause");
    return 0;
}