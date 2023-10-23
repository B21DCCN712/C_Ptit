#include<stdio.h>
#include<math.h>

int chinhphuong(int n){
	int m=sqrt(n);
	if (m*m==n) return 1;
	return 0;
}


void swap(int *a,int *b){
		int temp=*a;
		*a=*b;
		*b=temp;
}

int main(){
	int a,b,c,d,e,f;
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	int s=a*b+c*d+e*f;
	if(chinhphuong(s)==0) printf("NO");
	else {
		if (a<b) swap(&a,&b);
		if (c<d) swap(&c,&d);
		if (e<f) swap(&e,&f);
		int canh=sqrt(s);
		if (a==c&&c==e&&e==canh) printf("YES");
		else{
		if (c==canh) {swap(&a,&c); swap(&b,&d);}
		if (e==canh) {swap(&a,&e); swap(&b,&f);}
		if (a==canh){
		b=a-b;
		if (c==b&&e==b||c==b&&f==b||d==b&&e==b||d==b&&f==b) printf("YES");
		else printf("NO");
		}
		else printf("NO");
		}
	}
}
