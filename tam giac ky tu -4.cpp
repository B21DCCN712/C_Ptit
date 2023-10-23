#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			printf("%c",62+2*j);
		}
		for(int j=i+1;j<=2*i-1;j++){
			printf("%c",62+2*(2*i-j));
		}
		printf("\n");
	}
}
