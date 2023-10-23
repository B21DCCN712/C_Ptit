#include<stdio.h>
#include<string.h>

int main(){
	int t;
	scanf("%d\n",&t);
	while(t--){
		char lama[100];
		gets(lama);
		int sum[100];
		int sum1=0;
		int k=strlen(lama);
		for(int i=0;i<k;i++){
			switch(lama[i]){
				case 'I':
					sum[i]=1;
					break;
				case 'V':
					sum[i]=5;
					break;
				case 'X':
					sum[i]=10;
					break;
				case 'L':
					sum[i]=50;
					break;
				case 'C':
					sum[i]=100;
					break;
				case 'D':
					sum[i]=500;
					break;
				case 'M':
					sum[i]=1000;
					break;
			}
		}
		for(int i=0;i<k-1;i++){
			if (sum[i]<sum[i+1]) sum1 -=sum[i];
			else sum1 +=sum[i];
		}
		printf("%d\n",sum1 +sum[k-1]);
	}
}

