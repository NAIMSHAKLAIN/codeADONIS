#include <stdio.h>

int main(){
    float km,m,cm,ft,in;
    printf("enter the distance\n");
    scanf("%f",&km);
    m=km*1000;
    cm=m*100;
    in=cm/2.54;
    ft=in/12;
    printf("%f kilometer\n",km);
    //printf("%f meter\n",m);
    //printf("%f centimeter\n",cm);
    //printf("%f inches\n",in);
    //printf("%f feet\n",ft);
    return 0;
}