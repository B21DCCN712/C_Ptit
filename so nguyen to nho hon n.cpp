#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	if(n>2){
	printf("2\n");
	for(int i=3;i<=n;i+=2){
		int uoc =0;
		for (int j=2;j<=sqrt(i);j++){
			if (i % j == 0){
			uoc ++;	
			}
	}
	if (uoc ==0)
			{
				printf("%d\n",i);
			}
	}
}

}
