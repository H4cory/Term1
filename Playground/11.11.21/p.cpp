#include <iostream>

using namespace std;

//igraq si s charowe

int main(){
    while (true){

    char myChar[100], contra[10];
    contra[0] = 'E';
    contra[1] = 'N';
    contra[2] = 'D';

    cout<< contra <<"THE FACUS??";

    cout<<"\nGive me a char bro               : ";
    cin >> myChar;


    cout<<"\nThis is the char you gave me bruh: " << myChar<<endl;


    if(myChar == contra){
        exit(0);
    }

}
    return 0;
}