#include<stdio.h>
int main(){
	int speed,timetaken,distance;
	scanf("%d%d",&speed,&timetaken);
	distance=speed*timetaken;
	printf("%d",distance);
	return 0;
}