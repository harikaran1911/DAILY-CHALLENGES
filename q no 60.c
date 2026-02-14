#include<stdio.h>
int main(){
	int r,h,surfacearea,volume;
	scanf("%d%d",&r,&h);
	surfacearea=2*3.14*r*h;
	volume=3.14*h*r*r;
	printf("%d\n%d",surfacearea,volume);
	return 0;
}