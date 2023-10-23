#include<stdio.h>
int main (){
	int n,a[100];
	int b[100]={0};
	int dem=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		b[a[i]]++;
	}
	for(int i=0;i<n;i++){
		if (b[a[i]]>1){
			dem++;
			b[a[i]]=0;
		}
	}
	printf("%d\n",dem);
	for(int i=0;i<n;i++){
		if (b[a[i]]==0){
			printf("%d ",a[i]);
			b[a[i]]=1;
	}
}
}
	
