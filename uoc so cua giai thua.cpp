#include<stdio.h>
#include<math.h>



int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,p;       // n=62 p=7 x=9
		scanf("%d%d",&n,&p);
		int count=0,i=1;
		while(p*i<=n){
			int temp=p*i;
			while(temp % p==0){
				temp/=p;
				count++;
			}
			i++;
		}
		printf("%d\n",count);
		
	}
}
