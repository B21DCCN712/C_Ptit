#include<stdio.h>
#include<math.h>

struct tamgiac{
	int a,b,c;
	float dientich;
};

void nhap(struct tamgiac x[],int n){
	for(int i=0;i<n;i++){
	scanf("%d %d %d",&x[i].a,&x[i].b,&x[i].c);
	}
}

void dientich(struct tamgiac x[],int n){
	for(int i=0;i<n;i++){
		float p=(x[i].a+x[i].b+x[i].c)/2;
		x[i].dientich=sqrt(p*(p-x[i].a)*(p-x[i].b)*(p-x[i].c));
	}
}

void sapxep(struct tamgiac x[],int n){
	struct tamgiac temp;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
		if (x[i].dientich>x[j].dientich){
			temp=x[i];
			x[i]=x[j];
			x[j]=temp;
		}
		}
	}
}

void in(struct tamgiac x[],int n){
	for(int i=0;i<n;i++){
		printf("%d %d %d\n",x[i].a,x[i].b,x[i].c);
	}
}

int main(){
	int n;
	scanf("%d\n",&n);
	struct tamgiac x[1000];
	nhap(x,n);
	dientich(x,n);
	sapxep(x,n);
	in(x,n);
	return 0;
}	
