#include<stdio.h>

int main(){
	long long x,y;
	while(scanf("%lld",&x) != EOF){
		scanf("%lld",&y);
		if(x>y){
			long long temp=x;
			x=y;
			y=temp;
		}
		long long res=0,c=1;
		while(x<y){
			x=x+c;
			res++;
			if(x>=y) break;
			y=y-c;
			res++;
			c++;
		}
		printf("%lld\n",res);
	}
	return 0;
}
