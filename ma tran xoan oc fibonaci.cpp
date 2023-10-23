#include<stdio.h>

long long fibonacci(int n){
	if (n==0) return 0;
	if (n==1 || n ==2 ) return 1;
	return fibonacci (n-1) + fibonacci (n-2);
}

int main(){
	int n;
	scanf("%d",&n);
	int k=0;
	long long a[n+5][n+5];
	int h1=0,h2=n-1,c1=0,c2=n-1;
	while(k<n*n){
	for(int j=c1;j<=c2;j++){
		a[h1][j]=fibonacci(k++);
	}
	for(int j=h1+1;j<=h2;j++){
		a[j][c2]= fibonacci(k++);
	}
	for(int j=c2-1;j>=c1;j--){
		a[h2][j]= fibonacci(k++);
	}
	for(int j=h2-1;j>=h1+1;j--){
		a[j][c1]=fibonacci(k++);
	}
	h1=h1+1;
	h2=h2-1;
	c1=c1+1;
	c2=c2-1;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%lld ",a[i][j]);
		}
		printf("\n");
	}
}
