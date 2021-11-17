#include <iostream>
#include <cstring>

using namespace std;

int main(){
    int br = 0;
    char Input[1000000];

    cin>>Input;

    for(int i = 0;i < strlen(Input) ;i++){
        if(Input[i] == '.'){
            br+=1;
        }
    }

    cout<<br;
 
    //system("Pause");
    return 0;
}

// dobawqt simwulite
// cout(uslowiq)/(iuzhodi)