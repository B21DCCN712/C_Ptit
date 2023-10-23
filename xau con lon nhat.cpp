#include<stdio.h>
#include<string.h>

int main(){
	int t;
	scanf("%d",&t);
		char c[100005];
		scanf("%s",c);
		int max=0;
		int k=strlen(c);
		while(max<k){
		int danhdau;
		char temp=c[max];
		for(int i=max;i<k;i++){
			if (c[i]>temp) temp=c[i];
		}
		for(int i=max;i<k;i++){
			if (c[i]==temp){
			printf("%c",c[i]);
			danhdau=i;
			}
		}
		max=danhdau+1;
		}
}
