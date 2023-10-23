#include<stdio.h>
#include<math.h>
int main(){
	int n ;
	int so=0;
	scanf("%d",&n);
	int m=2;
		while(so<n){
			int dung=1;
		for(int i=2;i<=sqrt(m);i++){
				if(m%i==0){
					dung =0;
					break;
				}
				}if(dung ==1){
					printf("%d\n",m);
					so++;
				}
		
		m++;
	}
}

