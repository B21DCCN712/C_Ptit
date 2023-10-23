#include<stdio.h>
#include<math.h>
int thuannghich(int n){
int m=n;
int somoi=0,tong=0;
while(n>0){
int k=n%10;
tong=tong+k;
somoi=somoi*10+k;
n/=10;
}
if ( somoi !=m) return 0;
if ( tong %10 !=0) return 0;
return 1;
}


int main()
{
int t; 
scanf("%d",&t);
while(t--){
int n,dem=0;
scanf("%d",&n);
int p=pow(10,n-1),k=pow(10,n);
for (int i=p;i<k;i++){
if ( thuannghich(i) ) dem++;
}
printf("%d\n",dem);
}
}
