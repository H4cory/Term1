/* 5) Da  se  nameryat  razlikite  mezhdu  nay-golyamata  i  nay-malkata 
stoynosti v otdelnite stalbove na dvumeren masiv s m reda i 
n stalba 
*/


#include <iostream>

using namespace std;

int main(){
    int MyArr[100][100], n=0, m=0, Arr[100], Min = 0, Max = 0;


    //Wywejdame matricata
    cout<<"Wywedete  M reda i N stylba: "; cin  >> m >> n;
    for(int i = 0;i< n ;i++ ){
        cout<<endl;
        Min = 9999;
        Max = 0;
        for(int f=0;f< m ;f++){
            cout<<"Wywedete Arr["<<f+1<<"]["<<i+1<<"]: ";
            cin>>MyArr[f][i];
            if(Min>MyArr[f][i]){
                Min= MyArr[f][i];
            }
            if(Max<MyArr[f][i]){
                Max=MyArr[f][i];
            }
        }
        Arr[i]=Max-Min;
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


    cout<<"\nRazlikata mejdu nai malkoto i nai golqmoto chislo w edin stylb e: \n";
    for(int i = 0;i<n ;i++){

        cout<<i+1<<". "<<Arr[i]<<endl;
    }

    system("Pause");
    return 0;
}