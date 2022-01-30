#include <stdio.h>

int main(){
    int a,b;
    float c;
    printf("enter the numbers\n");
    scanf("%d%d",&a,&b);
    c =a % b ;
    printf("the remainder %f\n",c);
    return 0;
}