#include<stdio.h>
int main(){
	int n ;
	int k=65;
	scanf("%d",&n);
	for(int i=n-1;i>=0;i--){
		for(int j=0;j<=i;j++){
			printf("%c",65+2*(n-1-i)+2*j);
		}
		printf("\n");
	}
}
