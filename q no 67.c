#include<stdio.h>
int main(){
	int totalcandies,people,candies;
	scanf("%d%d",&totalcandies,&people);
	candies=totalcandies/people;
	printf("each people will get %d",candies);
	return 0;
}