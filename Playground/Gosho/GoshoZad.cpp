
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int b=0;
    char a ;

    cout<<"Wywedete . za Hello World \na: ";
    cin >> a;

    if(a == '.'){
        b=1;
    }
    else if(a=='^'){
        b=2;

    }

    else{
        cout<<"Wywedohte greshno chislo";
    }
   


    //system("Pause");
    return 0;
}

/*
. = 1
^ = 2
+ = 3
* = 4
x = 5
*/