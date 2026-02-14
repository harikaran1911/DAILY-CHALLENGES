#include<stdio.h>
int main(){
	int l,b,h,surfacearea,volume,perimeter;
	scanf("%d%d%d",&l,&b,&h);
	surfacearea=2*(l*b+b*h+h*l);
	volume=l*b*h;
	perimeter=4*(l+b+h);
	printf("%d\n%d\n%d",surfacearea,volume,perimeter);
	return 0;
}