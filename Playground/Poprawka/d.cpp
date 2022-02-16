/*

*/
#include <iostream>
#include <string>

using namespace std;

int main(){
string input;
int counter = 0;

getline(cin,input);

for(int i =0;input.length()>i;i++){
    if(i==0){
        if(input[i]=='?'&&input[i+1]!='?')
        counter++;
    }
    else {
        if(input[i]=='?'&&input[i+1]!='?'&&input[i-1]!='?')
        counter++;
    }
}
cout<<counter;

 return 0;
}