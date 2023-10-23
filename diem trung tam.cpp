#include<stdio.h>


int kiemtra(int xa,int ya, int xb,int yb, int xc, int yc){
	if ( (xa -xb)* (yb-yc) == (ya-yb)*(xb-xc)) return 1;
	else return 0;
}

int main(){
	int n;
	int check=0;
	scanf("%d",&n);
	int x[10005],y[10005];
	for (int i=0;i<n-1;i++){
		scanf("%d %d",&x[i],&y[i]);
	}
	for (int i=0;i<n-3;i++){
		if ( kiemtra(x[i],y[i],x[i+1],y[i+1],x[i+2],y[i+2]) == 0 ) check=1;
		break;
	}
	if (check==0) printf("Yes");
	else printf("No");
}
