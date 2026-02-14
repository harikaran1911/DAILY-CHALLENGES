#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    printf("%s",(n>0 && (n&(n-1))==0)?"Ture":"false");
    return 0;
}