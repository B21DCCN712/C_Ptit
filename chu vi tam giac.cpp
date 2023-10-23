#include<stdio.h>
#include<math.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		float xA,yA,xB,yB,xC,yC;
		scanf("%f%f%f%f%f%f",&xA,&yA,&xB,&yB,&xC,&yC);
		float AB=sqrt( pow((xB-xA),2) + pow((yB-yA),2) );
		float BC=sqrt( pow((xC-xB),2) + pow((yC-yB),2) );
		float AC=sqrt( pow((xC-xA),2) + pow((yC-yA),2) );
		if (AB+AC>BC && AB+BC>AC && BC+AC>AB){
			printf("%.3f\n",AB+AC+BC);
		}else printf("INVALID\n");
	}
}
