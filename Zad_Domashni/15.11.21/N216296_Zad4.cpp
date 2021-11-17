/* 4) Daden e dvumeren masiv ot s n reda  i n stalba. Da se nameri 
nomerat na  reda,  chiito  elementi  obrazuvat  simetrichna 
posledovatelnost. 
----------------------------------------------------
Simetricha posledowatelnost: 6 5 4 3 4 5 6
*/

#include <iostream>

using namespace std;

int main(){
    int MyArr[100][100], n=0, m=0, Arr[100], Half, br = 0,br2 = 0, CorrArr[100],br3=0;
    bool Check = true, CheckOdd = false, CheckOnce = true ;


    //Wywejdame matricata
    cout<<"Wywedete  N: "; cin  >> n;
    m=n;
    Half= m/2 ;
    if(m%2 > 0){
        CheckOdd = true;
    }

    for(int i = 0;i< n;i++ ){
        cout<<endl;
        br2 = Half - 1;
        br = 0;
        Check = true;
        CheckOnce = true;
        for(int f=0;f<m;f++){
            cout<<"Wywedete Arr["<<f+1<<"]["<<i+1<<"]: ";
            cin>>MyArr[f][i];

            if(Half>br){
                Arr[f]=MyArr[f][i];
                br++;
            }
            else{
                if(!(CheckOdd&&CheckOnce)){
                    if(!(Arr[br2] == MyArr[f][i])){
                        Check = false;
                    }
                    br2--;
                }
                else{
                    CheckOnce = false;
                }
            }
        }

        if(Check){
            CorrArr[br3]=i+1;
            br3++;
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


    cout<<"\nRedowete w koito ima simetricha posledowatelnost sa: ";
    for(int i = 0;i<br3 ;i++){
        cout<<CorrArr[i];

        //if() e izcqlo za prilejnost:
        if(i+1<br3){
           cout<<", ";
        }
    }
    

    system("Pause");
    return 0;
}