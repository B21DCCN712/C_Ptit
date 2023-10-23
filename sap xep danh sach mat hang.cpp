#include<stdio.h>
#include<string.h>

struct mathang{
	int id ;
	char name[100];
	char nhomhang[100];
	float a,b,loinhuan;
};

int main(){
	int n;
	scanf("%d\n",&n);
	struct mathang s[n] ,temp;
	for(int i=0;i<n;i++){
		s[i].id=i+1;
		gets(s[i].name);
		gets(s[i].nhomhang);
		scanf("%f %f\n",&s[i].a,&s[i].b);
		s[i].loinhuan=s[i].b-s[i].a;
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if (s[i].loinhuan<s[j].loinhuan){
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("%d %s %s %.2f\n",s[i].id,s[i].name,s[i].nhomhang,s[i].loinhuan);
	}
}


