#include<stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int test=1;test<=t;test++){
		int n;
		scanf("%d",&n);
		int a[n][n];
		int b[n][n];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if (j<=i) a[i][j]=j+1;
				else a[i][j]=0;
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				b[i][j]=0;
				for(int k=0;k<n;k++){
					b[i][j]+=a[i][k]*a[j][k];
				}
			}
		}
		printf("Test %d:\n",test);
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				printf("%d ",b[i][j]);
			}printf("\n");
		}
	}
}
