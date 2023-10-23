#include<stdio.h>
#include<string.h>

void dao(int s[],int n){
	for(int i=0;i<n/2;i++){
		int temp=s[i];
		s[i]=s[n-1-i];
		s[n-1-i]=temp;
	}
}

void hieu(char s1[] , char s2[]){
	int a=strlen(s1),b=strlen(s2) , n=0;
	int x[a],y[a],z[a];
	for(int i=0;i<a;i++) x[i]=s1[i]-'0';
	for(int i=0;i<b;i++) y[i]=s2[i]-'0';
	dao(x,a);
	dao(y,b);
	for(int i=b;i<a;i++) y[i]=0;
	int nho=0;            
	for(int i=0;i<a;i++){     
		int temp=x[i]-y[i]-nho;
		if(temp<0){
			z[n++]=10+temp;
			nho=1;
		}else{
			z[n++]=temp;
			nho=0;
		}
	}
	int check=0;
	for(int i=n-1;i>=0;i--){
		if(z[i] && check==0) check=1;
		if(check) printf("%d",z[i]);
	}
	if(check==0) printf("0");
}

int main(){
	int t;
	scanf("%d",&t);
	getchar();
	while(t--){
		char s1[1001], s2[1001];
		scanf("%s%s",s1,s2);
		if (strlen(s1) > strlen(s2) ||strlen(s1) == strlen(s2) && strcmp(s1,s2)>0 ) hieu(s1,s2);
		else hieu(s2,s1);
		printf("\n");
	}
}

