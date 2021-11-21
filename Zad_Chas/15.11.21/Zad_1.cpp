/* 1) Daden e dvumeren masiv s m reda  i n stalba. Da se nameri 
nomerat na reda, v koyto vsichki elementi sa ravni. */

#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main() {
 const int m=5; 
 int i,n,oc[20][m],br2,j;
 float sr_br[20],s;

 printf("Wywedi Broq ocenki:");scanf("%d",&n);
 for (i=0;i<n;i++){
printf("Student %d %d Ocenki:",i,m);
 for (j=0;j<m;j++) scanf("%d",&oc[i][j]);
 }
 for (i=0;i<n;i++){
s=0;br2=0;
 for (j=0;j<m;j++){
 s+=oc[i][j];
 if (oc[i][j]==2) br2++;
}
if (br2>0) sr_br[i]=br2;
else sr_br[i]=s/m;
 }
 printf("Now masiw\n");
 for (i=0;i<n;i++)
 printf("%d %4.2f\n",i,sr_br[i]);
 
 
 system ("pause");
 return 0;
}
