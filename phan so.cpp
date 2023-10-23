#include<stdio.h>
#include<string.h>

long long ucln(long a,long b){
	if (b==0) return a;
	return ucln(b,a%b);// uocsochunglonnhat
}

long long bcnn(long a,long b){
	return a*b/ucln(a,b); // boisochungnhonhat
}

typedef struct phanso{
	int tuso;
	int mauso;
}ps;


ps rutgon(ps a){
	ps b;
	b.tuso=a.tuso/(ucln(a.tuso,a.mauso));
	b.mauso=a.mauso/(ucln(a.tuso,a.mauso));
	return b;
}

void quydong(ps a,ps b){
	a=rutgon(a);
	b=rutgon(b);
	int c=bcnn(a.mauso,b.mauso);
	a.tuso=a.tuso*(c/a.mauso);
	a.mauso=c;
	b.tuso=b.tuso*(c/b.mauso);
	b.mauso=c;
	printf("%d/%d %d/%d\n",a.tuso,a.mauso,b.tuso,b.mauso);
}

ps tong(ps a,ps b){
	ps c;
	c.tuso=a.tuso*b.mauso+b.tuso*a.mauso;
	c.mauso=a.mauso*b.mauso;
	c=rutgon(c);
	return c;
}

ps thuong(ps a,ps b){
	ps c;
	c.tuso=a.tuso*b.mauso;
	c.mauso=a.mauso*b.tuso;
	c=rutgon(c);
	return c;
}

void xuat(ps a){
	printf("%d/%d\n",a.tuso,a.mauso);
}

int main(){
	int t;
	scanf("%d",&t);
	for(int k=1;k<=t;k++){
		ps a,b;
		scanf("%d%d%d%d",&a.tuso,&a.mauso,&b.tuso,&b.mauso);
	printf("Case #%d:\n",k);
	quydong(a,b);
	xuat(tong(a,b));
	xuat(thuong(a,b));	
	}
}

