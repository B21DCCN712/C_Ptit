#include<stdio.h>


int pascal(int a,int b) {
	if (b==0 || b==a) return 1;
	return pascal(a-1,b) + pascal(a-1,b-1);
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			printf("%d ",pascal(i,j));
		}
		printf("\n");
	}
}
