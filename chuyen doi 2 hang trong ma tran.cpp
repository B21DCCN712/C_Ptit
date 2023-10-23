#include<stdio.h>
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	int a[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int p,q;
	scanf("%d%d",&p,&q);
	for(int i=0;i<n;i++){
		int temp =a[p-1][i];
		a[p-1][i]=a[q-1][i];
		a[q-1][i]=temp;
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
