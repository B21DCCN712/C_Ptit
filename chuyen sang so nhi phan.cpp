#include<stdio.h>
#include<math.h>
int main(){
	int n,p=0 ;
	scanf("%d",&n);
	long long somoi=0;
//	if (n==0) printf("0");
//	else {
		while(n>0) {
			int k=n%2;
			somoi =somoi + k * pow(10,p);
			p++;
			n/=2;
		}
		printf("%d",somoi);
	}
//}
