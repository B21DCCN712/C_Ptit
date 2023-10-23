#include<stdio.h>
void swap(int *x ,int *y){
	int temp = *x;
	*x=*y;
	*y=temp;
}
int main(){
	int n,count=1;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n-1;i++){
		int min=i;
		for (int j=i+1;j<n;j++){
			if (a[min] > a[j])  min=j;
		}
		swap(&a[i],&a[min]);
		printf("Buoc %d: ",count++);
		for(int k=0;k<n;k++){
		printf("%d ",a[k]);
	}
		printf("\n");
}
}

