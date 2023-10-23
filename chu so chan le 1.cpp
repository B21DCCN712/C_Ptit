#include<stdio.h>
int main(){
	int n,m;
	int a=0,b=0;
	scanf("%d",&n);
	while(n>0){
		m = n%10;
	if ( m % 2 == 1){
		a++ ;
	} else if ( m % 2 == 0){
		b++;
	}
	n /= 10;
}
	printf ("%d %d",a,b);
}
