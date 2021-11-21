/* Daden e dvumeren masiv A s m reda i n stalba. Da se napishe programa, koyato sazdava
nov masiv b0, b1,...,bm-1, kato stoynostta na bi e ravna na sredno-aritmetichnoto na nenulevite
elementi v i-iya red na masiva A. */

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int MyArr[100][50],n,m,Sum=0,br=0;
    float AvgMyArr[50];

    cout<<"Wywedete broi na Stylbowe i Redowe:  "; cin >> n >> m;

    for(int i=0;i<m;i++){
        for(int f=0;f<n;f++){
            cout <<"Wywedete masiw["<<f+1<<"]["<<i+1<<"]: "; 
            cin >> MyArr[f][i];
            if (MyArr[f][i] != 0){
                Sum = Sum + MyArr[f][i];
                br+=1;
            }
        }
        if(Sum != 0 && br != 0){
            AvgMyArr[i]= Sum / br;
            Sum = 0;
            br = 0;
            }
            else AvgMyArr[i] = 0;     
    }
    for(int i=0;i<m;i++){
        cout<<"Sredno aritmetichno chislata ot Red:"<<i+1<<" e: "<<AvgMyArr[i]<<endl;
    }

    //system("Pause");
    return 0;
}