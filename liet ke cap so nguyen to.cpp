#include<stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if (a==b){
		return 0;
	}else if (a>b){
		int temp=a;
		a=b;
		b=temp;
	}else {
	for(int i=a;i<=b;i++){
		for(int j=a;j<=b;j++){
			int kq=0;
			for(int k=2;k<=i||k<=j;k++){
				if (i%k==0&& j%k==0){
					kq=1;
				}
			}
	if (kq==0 && i<j){
	printf("(%d,%d)\n",i,j);
	}
		}
}
}
}
