/* 2) Daden e dvumeren masiv ot s 'm' reda  i 'n' stalba. Da se nameri 
nomerat na reda, v koyto vsichki elementi sa chetni chisla. */

#include <iostream>

using namespace std;

int main(){
    int MyArr[100][100], n=0,m=0, EvArr[100], br=0;
    float Ost = 0;

    cout<<"Wywedete N reda i M koloni: "; cin >> m >> n;

    for(int i = 0;i< n;i++ ){
        cout<<endl;
        for(int f=0;f<m;f++){
            cout<<"Wywedete Arr["<<f+1<<"]["<<i+1<<"]: ";
            cin>>MyArr[f][i];
            Ost += MyArr[f][i] % 2;
        }
        if (Ost == 0){
            EvArr[br] = i+1;
            br++;
        }
        Ost = 0; 
    }

    //Izkarwa matricata (za prilejnost)
    cout<<"Masiwyt izglejda taka: \n";
    for(int i=0;i<n;i++){
        cout<<i+1<<". | ";
        for(int f=0;f<m;f++){
            cout <<MyArr[f][i]<<' ';          
        }
        cout<<" | ";
        cout<<endl;
    }

    cout<<"\nRedowete koito sa izcqlo chetni sa: ";
    for(int i = 0;i<br ;i++){
        cout<<EvArr[i];
        //if() e izcqlo za prilejnost:
        if(i+1<br){
           cout<<", ";
        }
    }
    

    system("Pause");
    return 0;
}