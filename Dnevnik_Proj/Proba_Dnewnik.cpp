#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    
    string a;
    char b;
    bool c=true;
    

    //syzdawane na cikyl za repeat na programata
    while(true){
    cout<<endl<<"START OF CODE:----------------------------------------------"<<endl<<endl;
   

    //otwarqne na a.txt za pisane
    fstream otxt;
    otxt.open("a.txt", ios::out|ios::app|ios::in);

    //greshka
    if(otxt.fail()){
        cerr << "Ima greshka!!!!!";
        cout<<endl<<endl<<"END OF CODE ------------------------------------------------------------"<<endl;
        otxt.close();
        exit(0);
    }


    cout<<endl<<"Input: ";

    //Zapiswane w file
    c=true;
    while(c){
        cin>>a;                 
        if(a=="END") {
            cout<<endl<<endl<<"END OF CODE ------------------------------------------------------------"<<endl;
            otxt.close();
            exit(0);
            }
        if(a=="exit") c=false;
        otxt << a << endl;
    }

    //Zatwarqne na zapiswaneto
     //otxt.close();

    //otawarqne na chetene ot file
     //fstream itxt;
    // itxt.open("a.txt", ios::in);

    //chetene i izkarwane
    cout<<endl<<"Output: ";
    while(!otxt.eof()){
        b = otxt.get();
        cout<<b;
    }

    //zatwarqne na chetene
    otxt.close();
   
    cout<<endl<<endl<<"END OF CODE ------------------------------------------------------------"<<endl;
    }

    //system("pause");
    return 0;
}