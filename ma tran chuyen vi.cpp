#include<stdio.h>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int a[100][100];
	int b[100][100];
	for(int i=0;i<n;i++){
		printf("\n");
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			b[i][j]=a[j][i];
		}
	}
for(int i=0;i<m;i++){
	printf("\n");
		for(int j=0;j<n;j++){
			printf("%d ",b[i][j]);
		}
	}
}
