#include <stdio.h>
#include <stdlib.h>



    int main()
{

    int choice,no1,no2;

    printf("menu:\n");
    printf("1.addition\n");
    printf("2.substractiion\n");
    printf("3.division\n");
    printf("4.multiplication\n");

    scanf("%d",&choice);

    printf("enter two numbers:");
    scanf("%d %d",&no1,&no2);

    switch(choice)
{
   case 1:
    printf("resault:%d\n",no1+no2);
    break;

   case 2:
    printf("resault:%d\n",no1-no2);
    break;
   case 3:
    printf("resault:%d\n",no1*no2);
    break;
    case 4:
    printf("resault:%d\n",no1/no2);
    break;
    default:
        printf("invalid choice.\n");

}
    return 0;
}
