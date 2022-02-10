/*
От клавиатурата се въвежда текст, който е дълъг най-много 80 символа. Дума в текста се
нарича последователност от символи, в която не се среща символът интервал. Думите в
текста са разделени с един интервал. Да се състави програма, която въвежда текста от
клавиатурата и го извежда на екрана като в него са разменени най-дългата с най-късата дума.
Ако има повече от една най-къса и/или повече от една най-дълга дума, то да се разменят
последната най-къса с първата най-дълга дума. Ако всички думи са равни, текстът не се
променя.

*/
#include <iostream>
#include <cstring>
#include <string>

using namespace std;


struct sep
{
    int ch;
    char word[20];

}words[20];

int main(){
string input;
int counterC =0, counterW = 0, big[2] = {INT_MIN,0}, smal[2] = {INT_MAX,0}, holder = 0;


getline(cin,input);

if(input.length()>80){
    cout<<"mnogo simwuli";
    exit (0);
}

for(int i = 0;input.length()>i;i++){
    if(input.length()==i+1){
        words[counterW].word[counterC]=input[i];
        counterC++;
        if(counterC>big[0]){
        big[0]=counterC;
        big[1]=counterW;
        }
        if(counterC<=smal[0]){
        smal[0]=counterC;
        smal[1]=counterW;
        }
        words[counterW].ch = counterC;
        counterW++;
        }
    else if(input[i]!=' '){
        words[counterW].word[counterC]=input[i];
        counterC++;

    }
    else{
        if(counterC>big[0]){
        big[0]=counterC;
        big[1]=counterW;
        }
        if(counterC<=smal[0]){
        smal[0]=counterC;
        smal[1]=counterW;
        }
        words[counterW].ch = counterC;
        counterC=0;
        counterW++;
    }


}

for(int i = 0;counterW>i;i++){
    if(i==smal[1]&&smal[0]!=big[0]){
    for(int j=0;words[big[1]].ch>j;j++)
        cout<<words[big[1]].word[j];
        cout<<' ';
    }
    else if(i==big[1]&&smal[0]!=big[0]){
        for(int j=0;words[smal[1]].ch>j;j++)
        cout<<words[smal[1]].word[j];
        cout<<' ';
    }

    else{
    for(int j=0;words[i].ch>j;j++)
        cout<<words[i].word[j];
        cout<<' ';
        }
}

 return 0;
}