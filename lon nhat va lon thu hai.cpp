#include<stdio.h>
int main(){
	int n,a[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	} int max=a[0],max2=a[0];
	for(int i=0;i<n;i++){
		if (a[i]>max){
			max =a[i];
		}
	} for(int i=0;i<n;i++){
		if (a[i] > max2 && a[i]< max){
			max2 =a[i];
		}
	}
	printf("%d %d",max,max2);
}
