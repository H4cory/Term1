#include <iostream>
#include <stdlib.h>
#include <math.h>


using namespace std;

//izkarwa wsichki chisla ot 0 do N koito sa rawni na sumata ot kubowete na swoite cifri
int main() {
	
	int n, b[10],a=0,c=0,sum=0,d=0;
	
	cout<<"Wywedete N:";
	cin>>n;

	while(n>0){

	c=n;
	while(true){
		b[a]= c % 10;
		c=c/10;
		if(c==0) break;
		a++;
	}

	for (int i = a;i>=0;i--){
		sum = sum + pow(b[i],3);
	}

	if(sum==n){
		cout<<"Otgowor:"<<n<<endl;
	}

	a=0;
	sum=0;
	n--;
	}


	cout<<endl<<"!!! END OF CODE !!!"<<endl;
	system("pause");
	return 0;
}