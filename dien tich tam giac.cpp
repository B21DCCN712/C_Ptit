#include<stdio.h>
#include<math.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		double xA,yA,xB,yB,xC,yC;
		scanf("%lf%lf%lf%lf%lf%lf",&xA,&yA,&xB,&yB,&xC,&yC);
		double AB=sqrt( pow((xB-xA),2) + pow((yB-yA),2) );
		double BC=sqrt( pow((xC-xB),2) + pow((yC-yB),2) );
		double AC=sqrt( pow((xC-xA),2) + pow((yC-yA),2) );
		if (AB+AC>BC && AB+BC>AC && BC+AC>AB){
			double p=(AB+AC+BC)/2;
			double dientich=sqrt(p*(p-AB)*(p-AC)*(p-BC));
			printf("%.2lf\n",dientich);
		}else printf("INVALID\n");
	}
}
