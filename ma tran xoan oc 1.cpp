#include<stdio.h>
int main(){
	int n, a[100][100];
	scanf("%d",&n);
	int count =1 ,h1=0,h2=n-1,c1=0,c2=n-1;
	while(count <=n*n){
		for (int i=c1;i<=c2;i++){
			a[h1][i]=count++;
		}
		for (int i=h1+1;i<=h2;i++){
			a[i][c2]=count++;
		}
		for(int i=c2-1;i>=c1;i--){
			a[h2][i]=count++;
		}
		for(int i=h2-1;i>=h1+1;i--){
			a[i][c1]=count++;
		}
		h1++;
		c1++;
		h2--;
		c2--;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
			printf("\n");
	}
}
