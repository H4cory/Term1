#include <iostream>
#include <stdlib.h>

using namespace std;


//Shahmatna dyska s kon koito moje da byde mesten

int main(){
int x=1, y=1, k=0, n[8],a=1,b=0,c=0;


cout<<"Wywedete kordinati na konq!"<<endl<<"X:";
cin>>x;
cout<<"Y:";
cin>>y;

while(true){
if(x+2 > 0 && x+2 < 9){
    if(y+1>0&&y+1<9){
        cout<<"Moje da otidesh na: X"<<x+2<<"|Y"<<y+1<<"     Op:"<<a<<endl;
        n[1]=1;
        a++;
        
    }
    if(y-1>0&&y-1<9){
        cout<<"Moje da otidesh na: X"<<x+2<<"|Y"<<y-1<<"     Op:"<<a<<endl;
        n[2]=1;
        a++;
    }
}
if(x-2 > 0 && x-2 < 9){
    if(y+1>0&&y+1<9){
        cout<<"Moje da otidesh na: X"<<x-2<<"|Y"<<y+1<<"     Op:"<<a<<endl;
        n[3]=1;
        a++;
    }
    if(y-1>0&&y-1<9){
        cout<<"Moje da otidesh na: X"<<x-2<<"|Y"<<y-1<<"     Op:"<<a<<endl;
        n[4]=1;
        a++;
    }
}
if(y+2 > 0 && y+2 < 9){
    if(x+1>0&&x+1<9){
        cout<<"Moje da otidesh na: X"<<x+1<<"|Y"<<y+2<<"     Op:"<<a<<endl;
        n[5]=1;
        a++;
    }
    if(x-1>0&&x-1<9){
        cout<<"Moje da otidesh na: X"<<x-1<<"|Y"<<y+2<<"     Op:"<<a<<endl;
        n[6]=1;
        a++;
    }
}
if(y-2 > 0 && y-2 < 9){
    if(x+1>0&&x+1<9){
        cout<<"Moje da otidesh na: X"<<x+1<<"|Y"<<y-2<<"     Op:"<<a<<endl;
        n[7]=1;
        a++;
    }
    if(x-1>0&&x-1<9){
        cout<<"Moje da otidesh na: X"<<x-1<<"|Y"<<y-2<<"     Op:"<<a<<endl;
        n[8]=1;
        a++;
    }
}
a=1;

cout<<"Wywedete Op:";
cin>>b;
if(b==666)exit (0);
for(int i=1;i<9;i++){
if(n[i]==1){
    b--;
}
if(b==0){
    c=i;
    break;
}
}
switch(c){

case 1: x=x+2; y=y+1; break;
case 2: x=x+2; y=y-1; break;
case 3: x=x-2; y=y+1; break;
case 4: x=x-2; y=y-1; break;
case 5: x=x+1; y=y+2; break;
case 6: x=x-1; y=y+2; break;
case 7: x=x+1; y=y-2; break;
case 8: x=x-1; y=y-2; break;
}


}
return 0;
}

/*
TODO

naprawi wizualna dyska molqte!!!!



*/