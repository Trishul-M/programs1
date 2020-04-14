#include<stdio.h>
int main()
{int sum,arr[100],n,i;
float average;
printf("enter the size of array ");
scanf("%d",&n);
printf("enter the numbers");
printf("\n");

for(i=0;i<n;i++)
{

    scanf("%d",&arr[i]);
}
sum=0;
for(i=0;i<n;i++)
{
    sum=sum+arr[i];
}
printf("sum is %d",sum);
 average=sum/n;
printf("\n avg is:%f",average);
return 0;


}
