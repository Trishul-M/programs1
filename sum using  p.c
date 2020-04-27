#include <stdio.h>


int main()
{
    int a,b;
    int *x=&a;
    int *y=&b;


    printf("Enter the two integers:\n");
    scanf("%d%d",&a,&b);

   printf("The sum of two integers is %d \n",*x+*y);

  printf("The difference between the integres is %d\n",*x-*y);

    printf("The product of two integers is %d\n",(*x)*(*y));

    printf("The division of two integers is %d\n",(*x)/(*y));

    printf("The remainder of the integers is %d\n",(*x)%(*y));

    }
