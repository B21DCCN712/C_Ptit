#include<stdio.h>

struct sinhvien{
	int stt ;
	char name[100];
	char date[100];
	float a,b,c,sum;
};

int main(){
	int n;
	scanf("%d\n",&n);
	struct sinhvien s[n] , temp;
	for(int i=0;i<n;i++){
		s[i].stt=i+1;
		gets(s[i].name);
		gets(s[i].date);
	 	scanf("%f %f %f\n",&s[i].a,&s[i].b,&s[i].c);
		s[i].sum=s[i].a+s[i].b+s[i].c;
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if (s[i].sum<s[j].sum){
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("%d %s %s %.1f\n",s[i].stt,s[i].name,s[i].date,s[i].sum);
	}
}
