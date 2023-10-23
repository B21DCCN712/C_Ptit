#include<stdio.h>

void doicho(int *a,int *b){
		int temp= *a;
		*a=*b;
		*b=temp;
}
int main(){
	int n ,k=1 ;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n-2;i++){
		int check=0;
		for(int j= 0;j< n - i -1;j++){ 
			if (a[j] > a[j + 1]) {
				doicho(&a[j], &a[j+1]);
				check++;
			}
		}
		if (check != 0){
		printf("Buoc %d: ",k++);
		for(int k=0;k<n;k++) printf("%d ",a[k]);
		printf("\n");
	}
}
}
