#include<stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int k=1;k<=t;k++){
		int n,m;
		scanf("%d%d",&n,&m);
		int a[n+5][m+5];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				scanf("%d",&a[i][j]);
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				for(int p=i;p<n;p++){
					for(int q=j;q<m;q++){
						if(a[i][j]>a[p][q]){
							int temp=a[i][j];
							a[i][j]=a[p][q];
							a[p][q]=temp;
						}
					}
				}
			}
		}
		printf("Test %d:\n",k);
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
}
