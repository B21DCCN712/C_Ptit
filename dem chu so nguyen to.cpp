#include<math.h>
#include<stdio.h>
int main(){
	long long n ;
	scanf("%lld",&n);
	int dem2=0,dem3=0,dem5=0,dem7=0;
	while(n>0){
	long long k=n%10;
	if      (k==2)dem2++;
	else if (k==3)dem3++;
	else if (k==5)dem5++;
	else if (k==7)dem7++;
	n/=10;
	}
	if (dem2>0)printf("2 %d\n",dem2);
	if (dem3>0)printf("3 %d\n",dem3);
	if (dem5>0)printf("5 %d\n",dem5);
	if (dem7>0)printf("7 %d\n",dem7);
}
	
