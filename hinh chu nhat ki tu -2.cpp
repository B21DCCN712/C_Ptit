#include<stdio.h>

int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	for (int i=1;i<=m;i++){
	if (i>=n){
		for (int j=n;j>=1;j--){
			printf("%c",64+j);
		}
	}
	else {
		for(int j=i;j<=n;j++){
			printf("%c",64+j);
		}
		for(int j=i-1;j>=1;j--){
			printf("%c",64+j);
		}
		
	}
	printf("\n");
	}
}
