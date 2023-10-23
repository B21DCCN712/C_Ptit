#include<stdio.h>
int main(){
	double a,b ;
	scanf("%lf%lf",&a,&b);
	double t = a*b ;
	
	while(a!=b){
		if(a>b){
			a=a-b;
			
		}else if (b>a){
			b=b-a;
		}
	}	printf("%lf\n%ff",a,t/a);
}
