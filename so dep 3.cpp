#include<stdio.h>

int thuannghich(int n){
	int m=n;
	int somoi=0,tong=0,check=0;
	while(n>0){
		int k=n%10;
		if(k==6) check++;
		tong = tong+k;
		somoi = somoi * 10 + k;
		n/=10;
	}
	if ( tong % 10 != 8) return 0;
	if ( somoi != m) return 0;
	if (check==0) return 0;
	return 1;
}

int main(){
		int a,b;
		scanf("%d%d",&a,&b);
		if(a>b){
			int temp=a;
			a=b;
			b=temp;
		}
		for(int i=a;i<=b;i++){
			if (thuannghich(i)){
				printf("%d ",i);
			}
		}
		printf("\n");
}
