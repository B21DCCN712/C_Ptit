#include<stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	int tonglen=0,tongxuong=0,minlen=100000,minxuong=100000;
	for(int i=1;i<=t;i++){
		int a,b;
		scanf("%d%d",&a,&b);
		tonglen+=a;
		tongxuong+=b;
		if(a<minlen) minlen=a;
		if(b<minxuong) minxuong=b;
	}
	if (tonglen>tongxuong) printf("%d\n",tonglen+minxuong);
	else printf("%d\n",tongxuong+minlen);
}
