#include<stdio.h>
void show(int a[],int b){
	for(int i=0;i<b;i++){
		scanf("%d",&a[i]);
	}
}
int main(){
	int t;
	scanf("%d",&t);
	int n,m,p;
	for(int k=1;k<=t;k++){
	int a[100],b[100];
	scanf("%d%d%d",&n,&m,&p);
	show(a,n);
	show(b,m);
	printf("Test %d:\n",k);
	for(int i=0;i<n;i++){
		if (i==p){
			for(int j=0;j<m;j++){
				printf("%d ",b[j]);
			}
		}
		printf("%d ",a[i]);
	}
	printf("\n");
	
}
}
