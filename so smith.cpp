#include<stdio.h>
int tcs(int n){
	int tong=0;
	while(n>0){
		int i=n %10;
		tong+=i;
		n /=10;
	}
	return tong;
}
int main(){
	int tong=0;
	int n ;
	scanf("%d",&n);
	int m=n;
	int i=2;
	while(n>1){
		if (n % i==0){
			if (i<10){
				tong +=i;
			} else {
				tong += tcs(i);
			}
			n=n/i;
		} else{
		
		i++;
	}
	}
	if (tong ==tcs(m)){
		printf("YES");
	}else printf("NO");
}
