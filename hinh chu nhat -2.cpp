#include<stdio.h>
int main(){
	int a , b ;
	scanf("%d%d",&a,&b);
	for(int i=1;i<=a;i++){
		for(int j=i;j<=b;j++){
		printf("%d",j);
	}
//	if (a>b){
//		printf("%d",i);
		if (i>b){
			printf("%d",i);
			for(int j=i-1;j>i-b;j--){
				printf("%d",j);
			}
		}
//	}
	else {
	for(int j=b-1;j>b-i;j--){
		printf("%d",j);
	}
}
	printf("\n");
	}
}
