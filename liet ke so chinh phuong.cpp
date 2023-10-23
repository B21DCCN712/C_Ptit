#include<stdio.h>
#include<math.h>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int a= sqrt(n);
	int b=sqrt(m);
	a=(a*a==n)?a:a+1;
	printf("%d\n",b-a+1);
	for(int i=a;i<=b;i++){
		printf("%d\n",i*i);
	}

}
