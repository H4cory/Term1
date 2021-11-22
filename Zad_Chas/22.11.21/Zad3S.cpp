/*
Zadaden e ednomeren masiv ot tseli chisla A s n elementa, kadeto n e kratno na 2. Da se
sastavi programa, koyato izchislyava razlikata mezhdu sredno-aritmetichnoto na
nechetnite elementi ot parvata polovina i sredno-aritmetichnoto na nechetnite
elementi ot vtorata polovina na masiva. Programata da vklyuchva slednite funktsii:
- funktsiya za vavezhdane na ednomeren masiv;
- funktsiya za presmyatane na sredno-aritmetichno.
*/
#include<iostream>
using namespace std;

void input(int n ,int A[]){
    for(int i = 0 ;i<n ;i++){
        cout<<i+1<<": ";
        cin>>A[i];
    }
}

int avg( int A[], int i, int n){
    int average=0, sum =0, br =0;
    for(; i< n;i++){
        if(A[i]%2 == 1 ){
            sum = sum + A[i];
            br++;
        }
    }
    if(sum == 0 || br ==0){
        average = 0;
    }
    else{
    average = sum / br;
    }
    return average;
}

int main(){
    int A[100], n =-1, i = 0;
    float avg1 =0, avg2=0;

    while(n%2!=0){
        cout<<"wywedete n: ";
        cin>>n;
    }
    cout<<"Wywedete masiva: \n";
    input(n, A);
    avg1 = avg(A, i, n - n/2);
    i=0;
    avg2 = avg(A, i + n/2, n);

    cout<<"Razlicata mejdu pyrwata i wtorata polowina e: "<<avg1 - avg2;
    return 0;
}