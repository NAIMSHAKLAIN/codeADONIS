#include <stdio.h>

int main(){
    float salary;
    float dearness,houserent,grossalary;
    printf("enter the salary\n");
    scanf("%f",&salary);
    dearness=(salary*40)/100;
    houserent=(salary*20)/100;
    grossalary=salary-(dearness+houserent);
    printf("grossalary\t%f\n",grossalary);
    printf("dearness\t%f\n",dearness);
    printf("houserent\t%f\n",houserent);
    printf("salary\t\t%f\n",salary);
    return 0;
}