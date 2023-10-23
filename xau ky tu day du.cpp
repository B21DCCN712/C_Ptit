#include<stdio.h>
#include<string.h>


int Max(int a,int b){
	if(a>b) return a;
	else return b;
}

int main(){
	char s[100];
	scanf("%s",s);
    int n= strlen(s);
    int f[1000]; 
    for(int i=0;i<n;i++) f[i] = 1;
    for(int i=0;i<n;i++)
    {
        for(int j=i-1;j>=0;j--)  1 4 5 9 5 8
        {
            if(s[i] > s[j]) f[i] = Max(f[i], f[j]+1);
        }
    }
    int res = 0;
    for(int i=0;i<n;i++) res = Max(res, f[i]);
    printf("%lld", 26-res);
	return 0;
}
