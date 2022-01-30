#include <stdio.h>
int main()
{
    float celsius,fahrenheit;
    printf("enter the temperature of city in fahrenheit\n");
    scanf("%f",&fahrenheit);
    //scanf("%f",&celsius);
    //fahrenheit=(celsius*9/5)+32;
    celsius=(fahrenheit)*(1.8)+32;
    printf("%f",celsius);
    //printf("%f",fahrenheit);
}