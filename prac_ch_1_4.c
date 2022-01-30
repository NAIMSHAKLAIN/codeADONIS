#include <stdio.h>
int main()
{
    int maths,physics,english,chemistry,biology;
    float total;
    printf("enter maths marks\n");
    scanf("%d",&maths);
    
    printf("enter physics marks\n");
    scanf("%d",&physics);
    
    printf("enter english marks\n");
    scanf("%d",&english);

    printf("enter chemistry marks\n");
    scanf("%d",&chemistry);

    printf("enter the biology marks\n");
    scanf("%d",&biology);

    total=(maths+physics+english+biology+chemistry)/5;

    if ((total<=30) || maths<33 || physics<33 || english<33 || biology<33 || chemistry<33){
        printf("your total percentage %f and you are fail\n",total);
    }
    else{
       printf("your total percentage %f and you are pass\n",total);
    }
    
}