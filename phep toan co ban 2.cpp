#include<stdio.h>
int main(){
	int a ,b ;
	scanf("%d%d",&a, &b);
	printf("%d\n%d\n%ld\n%d\n%d\n%.2f",a+b,a-b,(long long)a*b,a/b,a%b,(double)a/b);
	return 0;
}
