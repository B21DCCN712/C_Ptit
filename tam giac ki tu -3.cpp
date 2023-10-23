#include<stdio.h>
int main(){
	int n,count =65;
	scanf("%d",&n);
	int a[n+5][n+5];
	for(int i=1;i<=n;i++){
		for (int j=i;j<=n;j++){
			a[j][i]=count++;
		}
	}for(int i=1;i<=n;i++){
		for (int j=1;j<=i;j++){
			printf("%c ",a[i][j]);
		}
		printf("\n");
	}
}
