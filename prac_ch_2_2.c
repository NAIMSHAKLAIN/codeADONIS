#include <stdio.h>

int main(){
    int a,reverse,reminder;
    printf("enter the number\n");
    scanf("%d",&a);
    reverse=a % 10;
    reverse=reverse*10+reminder;
    a = a/10;
    printf("%d",reverse);
    return 0;
}