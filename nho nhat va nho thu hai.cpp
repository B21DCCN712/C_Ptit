#include<stdio.h>
int main(){
	int n,a[n];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}int min=a[0];
	int min2=a[1];
	for(int i=0;i<n;i++){
		if (a[i]<a[0]){
			min=a[i];
		}
		}for(int i=0;i<n;i++){
		if (a[i] < min2 && a[i] > min){
			min2=a[i];
		}
	}printf("%d %d",min,min2);
}
