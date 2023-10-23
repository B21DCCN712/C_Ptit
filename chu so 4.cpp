#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int tong(int n){
	int tong =0;
	while(n>0){
		int k=n%10;
		tong+=k;
		n/=10;
		}
		if (tong % 10 ==0){
			return 5;
		}
	return 0;
}

bool thuannghich(int n){
	int somoi=0;
	int m=n;
	while(n>0){
		int k=n%10;
		if (k ==4){
			return false ;
		}
		somoi= somoi * 10 + k;
		n /= 10;
	}
	if (somoi == m)
		return true ;
	return false ;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n ;
		scanf("%d",&n);
		for(int i= pow(10,n-1);i<pow(10,n);i++)
			if (tong(i) && thuannghich(i))
				printf("%d ", i);
		printf("\n");
	}
}
				
	
