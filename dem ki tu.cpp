#include<stdio.h>
#include<string.h>
int main(){
	char a[100] ;
	gets(a);
	int m=0,b=0,c=0;
	int len=strlen(a);
	for(int i=0;i<len;i++){
		if ('0'<=a[i] && a[i]<='9'){
			b++;
		}else if ('A' <=a[i] && a[i]<='Z' || 'a'<=a[i] && a[i]<='w'){
			m++;
		} else {
			c++;
		}
	}
	printf("%d %d %d",m,b,c);
	
}
