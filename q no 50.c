#include<stdio.h>
#include<math.h>
int main(){
	int x1,x2,y1,y2,x,y;
	float dist;
	scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
	x=(x2-x1)*(x2-x1);
	y=(y2-y1)*(y2-y1);
	dist=sqrt(x+y);
	printf("%.2f",dist); 
	return 0;
}