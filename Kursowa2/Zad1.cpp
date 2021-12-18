/*

*/
#include <iostream>

using namespace std;

int main(){

    int A[1000], B[1000], N = 0, K = 0, S = 0, Min = INT_MAX, Max = INT_MIN;

    cin>>N>>K;

    if(2>N||N>1000||1>K||K>100){
        cout<<"Greshen whod!!!";
        exit (0);
    }

    for(int i =0;i<N;i++){
        cin>>B[i];
        A[i]=B[i];
    }   

    for(int i = 0;i<K;i++){

        for(int f = 0;f<N;f++){
            S+=A[f];
        }
        for(int f = 0;f<N;f++){
            A[f]=S-A[f];
        }
        S = 0;

    }

    for(int i =0;i<N;i++){
        if(A[i]>Max){
                Max = A[i];
        }
        if(A[i]<Min){
                Min = A[i];
            }
    }

    cout<<endl<<Max-Min<<endl;

    system("Pause");
    
    return 0;
}
