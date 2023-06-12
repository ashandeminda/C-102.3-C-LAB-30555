#include <stdio.h>
#include <stdlib.h>

int main( )
{

    int no1;

    printf("enter an integer");
    scanf("%d",&no1);

    switch (no1 % 2)
    {
    case 1:
    printf("%d is an odd number\n",no1);

    break;
    case 0:
    printf("%d is an even number\n",no1);

     break;
    }

    return 0;
}
