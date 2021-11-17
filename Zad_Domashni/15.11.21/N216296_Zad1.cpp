/* Daden e dvumeren masiv s m reda  i n stalba. Da se nameri 
nomerat na reda, v koyto vsichki elementi sa ravni. */

#include <iostream>

using namespace std;

int main(){
    int MyArr[100][100], n=0,m=0, EqArr[100],Eq = 0,br=0;
    bool AllEq= true;

    cout<<"Wywedete N reda i M koloni: "; cin >> m >> n;

    for(int i = 0;i< n;i++ ){
        cout<<endl;
        for(int f=0;f<m;f++){
            cout<<"Wywedete Arr["<<f+1<<"]["<<i+1<<"]: ";
            cin>>MyArr[f][i];

        }

    }
    for(int i = 0;i< n;i++ ){
        AllEq = true;
        Eq= MyArr[1][i];

        for(int f=0;f<m;f++){
            if(Eq!=MyArr[f][i]){
                AllEq=false;
            }
        }
        
        if(AllEq){
            EqArr[br] = i+1;
            br++;
        }
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

    cout<<"Redowete koito sa izcqlo rawni sa: ";
    for(int i = 0; i<br; i++){
        cout<<EqArr[i]<<' ';
    }

    system("Pause");
    return 0;
}