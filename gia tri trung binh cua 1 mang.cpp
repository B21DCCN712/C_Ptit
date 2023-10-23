#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	float a[100];
	float m=0;
	for(int i=0;i<n;i++){
		scanf("%f",&a[i]);
	}for(int i=0;i<n;i++){
		m+=a[i];
	}
	printf("%.3f",m/n);
}
