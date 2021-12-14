/*Задача 1.2. Даден е двумерен масив А с m реда и n стълба. 
Да се състави програма, която създава нов масив а0, а1,..., аm-1, като стойността
на аi е равна на индекса на най-малката положителна стойност в i-ия ред на А.
*/
#include <iostream>

using namespace std;

int main(){
    int A[100][100], a[100], m=0, n=0, holder;
    cout<<"Wywedete m i n: ";
    cin>> m >> n;
    for(int i =0 ;i<n;i++){
        holder =INT_MAX;
        for(int f= 0;f<m;f++){
            cout<<"A["<<i+1<<"]["<<f+1<<"]";
            cin>>A[i][f];
            if(A[i][f]>0 && holder>A[i][f]){
            holder = A[i][f];
            a[i]=f+1;
            }
        }
    }

    for(int i = 0;i < n;i++){
        cout<<a[i]<<endl;
    }
  //system("Pause");
    return 0;
}