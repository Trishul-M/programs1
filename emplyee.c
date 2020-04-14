//using structure printing and scannng data
#include <stdio.h>
#include <conio.h>
#include<string.h>
int main()
{
struct employeedetails
{
    char  employeename[100];
    int    eno;
    float salary;
    char   gender[2];
    char    maritalstatus[12];
    char     qua[30];
}emp;

    printf("EMPLOYEE NAME:\n");
    scanf("%s",&emp.employeename);
    printf("GENDER:\n");
    scanf("%s",&emp.gender);
    printf("ENTER SALARY:\n");
    scanf("%f",&emp.salary);
    printf("MARITAL STATUS:\n");
    scanf("%s",&emp.maritalstatus);
    printf("EMPLOYEE NUMBER:\n");
    scanf("%d",&emp.eno);
    printf("QUALIFICATION:\n");
    scanf("%s",&emp.qua);
    printf("YOUR FEEDED DATA");
    printf(" \nNAME:%s\t",emp.employeename);
    printf("\t\nSALARY:%f ",emp.salary);
    printf("\t\nGENDER: %s",emp.gender);
    printf("\t\nEMPLOYEE NO:%d",emp.eno);
    printf("\t\nMARITALSTATUS:%s",emp.maritalstatus);
    printf("\t\nQUALIFICATION:%s",emp.qua);
    return 0;
}
