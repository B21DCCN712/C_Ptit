#include<stdio.h>
int main(){
	int a[100],n;
	int count[100]={0};
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		count[a[i]]++;
			}
	for(int i=0;i<n;i++){
	if (count [a[i] ] >1){
		printf("%d ",a[i]);
		count [a[i]]=0;
	}
}
}
