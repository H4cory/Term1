/*
Да се състави алгоритъм и напише програма, която въвежда символен низ и го извежда в
обратен ред на символите в него.
*/
#include <iostream>
#include <stack>
#include <cstring>

using namespace std;

int main(){
    stack<char> a;
    char b[100];

    cin>>b;

    for(int i =0;strlen(b)>i;i++){
        a.push(b[i]);
    }

    while(!a.empty()){
        cout<<a.top();
        a.pop();
    }
    cout<<endl;


    //system("Pause");
    return 0;
}