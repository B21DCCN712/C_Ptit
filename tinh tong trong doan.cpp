#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d%d",&a,&b);
	int sum =0;
	if (a>=b){
		c=a;
		a=b;
		b=c;
	}
	for(int i=a;i<=b;i++){
		sum = sum +i ;
	}
	printf ("%d",sum);
}
