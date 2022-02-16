/*
Зададени са k (k<=50) окръжности (абсциса и ордината на центъра и радиус) и m (m<=20)
точки (абсциса и ордината). Да се състави алгоритъм и напише програма за определяне по
колко точки лежат във всяка окръжност. Да се използват статични масиви.
*/

#include <iostream>
#include <math.h> 

using namespace std;


int main(){
    float a[50],b[50], r[50], x[20],y[20], l;
    int k, m, count =0;

    cout<<"Wywedete broi okryjnoisti: ";
    scanf("%d",&k);
    if(!(k<=50)){
        cerr<<"Greshka";
        exit (0);
    }

    for(int i =0;i<k;i++){
        cout<<i+1<<". a,b,r = ";
        scanf("%d%d%d",&a[i], &b[i], &r[i]);
    }
    
    cout<<"Wywedete broi tochki: ";
    scanf("%d",&m);
    if(!(m<=20)){
        cerr<<"Greshka";
        exit (0);
    }

     for(int i =0;i<m;i++){
        cout<<i+1<<". x,y = ";
        scanf("%d%d",&x[i], &y[i]);
    }

    for(int i =0;i<k;i++){
        for(int j=0;j<m;j++){
            if(pow(r[i],2)>=(pow((x[j]-a[i]),2)+pow((y[j]-b[i]),2)))
                count++;
            }
        cout<<"Okryjnost "<< i+1 <<" ima "<<count<<" tochki w neq!"<<endl;
        count = 0;
    }


    return (0);
}