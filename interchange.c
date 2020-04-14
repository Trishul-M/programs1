#include <stdio.h>
#include<conio.h>
int main()
{
int i,n,arr[20],temp;
int small,small_pos;
int large,large_pos;

printf("\nEnter the number of elements:");
scanf("%d",&n);
printf("\n Enter the numbers:\n");
for(i=0;i<n;i++) {
scanf("%d",&arr[i]);
}
small=arr[0];
small_pos=0;
large=arr[0];
large_pos=0;
for(i=1;i<n;i++) {
if(arr[i]<small)
{
small=arr[i];
small_pos=i;
}
if(arr[i]>large)
{
large=arr[i];
large_pos=i;
}
}
printf("\nThe smallest of entered numbers is %d",small);
printf("\nThe largest of entered numbers is %d",large);
temp=arr[large_pos];
arr[large_pos]=arr[small_pos];
arr[small_pos]=temp;
printf("\n The new array is: " );
for(i=0;i<n;i++) {
printf("\n%d",arr[i]);
}
}

