#include<stdio.h>
int main()  {
char str[30];
int i=0,j,n=0,flag=0;
printf("enter the string\n");
gets(str);
while(str[i]!=0){
i++;
}
n=i;
i=0;
j=n-1;
while(i<=j)
{
if(str[i]!=str[j]) {
flag=1;
break;
}
i++;
j--;
}
if(flag==1)
 printf("Entered string is not a pallindrome");
else
 printf("Entered string is  a pallindrome");
 return 0;
 }

