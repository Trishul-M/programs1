#include <stdio.h>


int a,b,t;

   int swap(int *x,int *y)
{

    t=*x;
    *x=*y;
    *y=t;

}

int main() {

    printf("Enter the numbers:\n");
    scanf("%d%d",&a,&b);
    printf("The numbers before swapping are %d and %d\n",a,b);
    swap(&a,&b);
    printf("The numbers after swapping are %d and %d",a,b);
}
