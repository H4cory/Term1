/*
3) Daden e dvumeren masiv ot s n reda  i n stalba. Da se nameri 
nomerat na  reda,  chiito  elementi  obrazuvat  aritmetichna 
progresiya. 
---------------------------------
Ne bqh siguren dali aritmetichnata progresiq e samo za uwelichawashti se chisla ili i za namalqshti,
zaradi towa q naprawih samo za uwelichawashti naprimer:
2,4,8,10,12,14 (Uwelichawashti)
a ne, za:
16,13,10,7,4 (namalqshti)
*/


#include <iostream>

using namespace std;

int main(){
    int MyArr[100][100], n=0, m=0, Arr[100], Con = 0, br=0, Dif = 0;
    bool Check = true,Check2 = true;

    //Wywejdame matricata
    cout<<"Wywedete N: "; cin >> n;
    m = n;
    for(int i = 0;i< n;i++ ){
        cout<<endl;
        Check = true;
        for(int f=0;f<m;f++){
            cout<<"Wywedete Arr["<<f+1<<"]["<<i+1<<"]: ";
            cin>>MyArr[f][i];
            if(Con<=MyArr[f][i]){
                Con=MyArr[f][i];
            }
            else{
                Check = false;
            }
        }
        if(Check){
            Arr[br] = i;
            br++;
        }
        Con = 0;
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

    cout<<"\nRedowete w koito ima matematichna progresiq sa: ";
    for(int i = 0; i<br; i++){

        Dif = MyArr[1][Arr[i]] - MyArr[0][Arr[i]];
        for(int f = 0; f< m; f++){

            if(Dif!=MyArr[f+1][Arr[i]] - MyArr[f][Arr[i]]&&f+1<m){
                Check2 = false;
            }
        }
        if(Check2){
            cout<<Arr[i]+1<<' ';
        }
        Check2 = true;
    }

    system("Pause");
    return 0;
}