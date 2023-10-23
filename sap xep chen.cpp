#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		printf("Buoc %d: ",i);
		for(int j=0;j<=i;j++){
			for(int k=j+1;k<=i;k++){
				if (a[j] > a[k]){
					int temp=a[j];
					a[j]=a[k];
					a[k]=temp;
				}
			}
			printf("%d ",a[j]);
		} 
		printf("\n");
	}
}
