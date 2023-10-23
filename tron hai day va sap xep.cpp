#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	for(int p=1;p<=t;p++){
		int n;
		scanf("%d",&n);
		int a[n],b[n];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		for(int i=0;i<n;i++){
			scanf("%d",&b[i]);
		}
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if (a[i] > a[j]) {
					int temp = a[i];
					a[i] = a[j];
					a[j]= temp;
				}
			}
		}
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if (b[i] < b[j]) {
					int temp = b[i];
					b[i] = b[j];
					b[j]= temp;
				}
			}
		}
		int m=0,k=0;
		printf("Test %d:\n",p);
		for(int i=0;i<2*n;i++){
			if ( i % 2 ==0) {
			printf("%d ",a[m++]);
		}
			else {
				printf("%d ",b[k++]);
			}
		}
		printf("\n");
	}
}
