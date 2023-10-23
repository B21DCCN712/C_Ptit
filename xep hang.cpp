#include<stdio.h>


void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main(){
	int n;
	scanf("%d",&n);
	long long t=0;
	int a[100000],b[100000];
	for(int i=0;i<n;i++){
		scanf("%d%d",&a[i],&b[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
			swap(&a[i],&a[j]);
			swap(&b[i],&b[j]);
			}
		}
	}
	for(int i=0;i<n;i++){
		if(t<a[i]) t=a[i]+b[i];
		else t+=b[i];
	}

	printf("%lld",t);
}
