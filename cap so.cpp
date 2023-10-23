#include<stdio.h>
int usc(int a,int b) {
	while(a!=b){
	if (a>b){
		a=a-b;
	} else if (a<b){
		b=b-a;
	}
}
return a;
}
int main(){
	int t;	scanf("%d",&t);
	while(t--){
		printf("\n");
		int a,b,c,d;
		scanf("%d%d%d%d",&a,&b,&c,&d);
		if (usc(a,b)==usc(c,d)){
			printf("YES");
		}else printf("NO");
		
	}
}
