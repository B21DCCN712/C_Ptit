#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[100];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int m;
	scanf("%d",&m);
	for(int i =n-m ;i<n;i++){
			printf("%d ",a[i]);
		}
				for(int j=0;j<n-m;j++){
				printf("%d ",a[j]);
			}
	}
