#include<stdio.h>
#include<math.h>
#include<string.h>

long long sonho(char s[]){
	long long N=0;
	for(int i=0;i<strlen(s);i++){
		if (s[i] =='6') N = N*10 +5;
		else N=N*10 +s[i]-'0';
	}
	return N;
}


long long solon(char s[]){
	long long L=0;
	for(int i=0;i<strlen(s);i++){
		if (s[i] =='5') L = L*10 +6;
		else L=L*10 +s[i]-'0';
	}
	return L;
}


int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char s1[20],s2[20];
		scanf("%s%s",s1,s2);
		printf("%lld %lld\n",sonho(s1) + sonho(s2) , solon(s1) + solon(s2));
	}
}
