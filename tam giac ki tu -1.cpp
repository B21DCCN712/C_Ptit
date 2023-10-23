#include<stdio.h>
int main(){
	int n ,k=97;
	scanf("%d",&n);
	int a[15][15];
	for(int i=1;i<=n;i++){
	if (i % 2 ==0){
		for(int j=i;j>=1;j--){
			a[i][j]=k++;
		}
	}
	else{
		for (int j=1;j<=i;j++){
			a[i][j]=k++;
		}
	}
}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			printf("%c ",a[i][j]);
		}
		printf("\n");
	}
}
