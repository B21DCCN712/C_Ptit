#include<stdio.h>


int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n+5][m+5];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int c,d;
	scanf("%d%d",&c,&d);
	if ((c>=1&&c<=m)&&(d>=1&&d<=m)){
	for(int i=1;i<=n;i++){
			int temp = a[i][c];
			a[i][c]=a[i][d];
			a[i][d]=temp;
	}
}
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				printf("%d ",a[i][j]);
			}
		printf("\n");
	}
}
