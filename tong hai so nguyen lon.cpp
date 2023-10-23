#include<stdio.h>
#include<string.h>

void dao(int s[],int n){
	for(int i=0;i<n/2;i++){
		int temp=s[i];
		s[i]=s[n-1-i];
		s[n-1-i]=temp;
	}
}

void cong(char s1[] , char s2[]){
	int a=strlen(s1),b=strlen(s2);
	int x[a],y[a],z[a+1];
	for(int i=0;i<a;i++) x[i]=s1[i]-'0';
	for(int i=0;i<b;i++) y[i]=s2[i]-'0';
	dao(x,a);
	dao(y,b);
	for(int i=b;i<a;i++) y[i]=0;
	int nho=0,n=0;
	for(int i=0;i<a;i++){
		int temp=x[i] + y[i] + nho;
		z[n++] = temp %10;
		nho =temp/10;
	}
	if (nho) z[n++]=nho;
	for(int i=n-1;i>=0;i--) printf("%d",z[i]);
}

int main(){
	int t;
	scanf("%d",&t);
	getchar();
	while(t--){
		char s1[505], s2[505];
		scanf("%s%s",s1,s2);
		if (strlen(s1) > strlen(s2) ) cong(s1,s2);
		else cong(s2,s1);
		printf("\n");
	}
}

