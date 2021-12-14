/*Дадени са 2 едномерни масива – А с k елемента и B с t елемента.
Да се състави алгоритъм и напише програма на С++, която изчислява и извежда
стойността на израза Z = minA - maxB, където с minA е означен най-малкият елемент
на масива А, а с maxB е означен най-големият елемент на масив В.
*/


#include <iostream>

using namespace std;

int main(){
    int A[100], B[100], k=0,t=0, Z=0, minA=INT_MAX, maxB=INT_MIN;
    cout<<"Wywedete k i t:";
    cin>>k>>t;
    for (int i = 0;i<k;i++){
        cout<<"A. "<<i+1<<" ";
        cin>>A[i];
        if(minA>A[i])
        minA=A[i];
    }
     for (int i = 0;i<t;i++){
        cout<<"B. "<<i+1<<" ";
        cin>>B[i];
        if(maxB<B[i])
        maxB=B[i];
    }
    Z=minA-maxB;
    cout<<"Z= "<<Z;
    //system("Pause");
    return 0;
}