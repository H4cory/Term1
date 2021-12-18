/*
Зададени са температурата и влажността на въздуха на всеки кръгъл час от едно денонощие. Да се състави алгоритъм
и напише програма, която намира:
	А) средната температура и средната влажност за денонощието;
	Б) най-студения час;
	В) часът, в който влажността е била най-голяма.

*/
#include <iostream>
#include <cfloat>

using namespace std;

int main(){
    float temp[24], wlaj[24], sum[2] = {0,0}, tempMin[2]={FLT_MAX,0}, wlajMax[2] = {FLT_MIN,0};

    for(int i = 0;i<24;i++){
        cout<<"Wywedete temperatura i wlajnost na wyzduha za "<<i<<":00 chasyt: ";
        cin>>temp[i]>>wlaj[i];
        sum[0] += temp[i];
        sum[1] += wlaj[i];

        if(temp[i]<tempMin[0]){
         tempMin[0]= temp[i];
         tempMin[1] = i ;

        }

        if(wlaj[i]>wlajMax[0]){
         wlajMax[0]=wlaj[i];
         wlajMax[1] = i ;

        }
    } 

    cout<<endl<<"Srednata temperatura za denonoshtieto e: "<<sum[0]/24<<endl;
    cout<<"Srednata wlajnost za denonoshtieto e: "<<sum[1]/24<<endl;

    cout<<"Nai studeniqt chas e: "<<tempMin[1]<<":00 chasyt"<<endl;
    cout<<"Chasyt s nai wisoka wlajnost e: "<<wlajMax[1]<<":00 chasyt"<<endl;


    //system("Pause");
    return 0;
}