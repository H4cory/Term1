//Da se nameryat nay-malkite stoynosti v otdelnite stalbove na dvumeren masiv s m
//reda i n stalba

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int MyArr[100][50], MinMyArr[50],n,m;
    cout<<"Wywedete broi na Redowete i Stylbowe: "; cin >> n >> m;


    for(int i=0;i<m;i++){
        for(int f=0;f<n;f++){
            cout <<"Wywedete masiw["<<f+1<<"]["<<i+1<<"]: "; 
            cin >> MyArr[f][i];
        }
    }
    for(int i=0;i<m;i++){
        MinMyArr[i]=MyArr[0][i];
        for(int f=0;f<n;f++){
            if(MyArr[f][i]<MinMyArr[f]){
                MinMyArr[i]=MyArr[f][i];
            }
        }
    }
    for(int i=0;i<m;i++){
        cout<<"Minimlanoto chislo w Stylb:"<<i+1<<" e: "<<MinMyArr[i]<<endl;
    }

    //system("Pause");
    return 0;
}