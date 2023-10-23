#include<stdio.h>
#include<math.h>
int main(){
	
float a, b , c,d,x1,x2;
scanf("%f%f%f",&a,&b,&c); 
 if (a ==0){
 	if ( b==0){
 		printf ("NO");
	 }else  {
	 printf("%.2f",(float)(-c/b));
}
 }else {
d= b*b -4*a*c ;	
if ( d > 0){
	 x1 =(float)(-b+sqrt(d))/(2*a);
 	 x2 =(float)(-b-sqrt(d))/(2*a);
	printf("%.2f %.2f",x1,x2);
}else if (d==0){
	printf("%.2f",(float)((-b)/(2*a)));
}else {
printf ("NO");
}
}
return 0;
}
