#include <stdio.h>
#include <conio.h>

int main()
{ int i,j,matrix[3][3],transpmatrix[3][3];
    printf("ENTER ELEMTS OF MATRIX \n");
    for(i=0;i<3;i++)
    {
    {
        for(j=0;j<3;j++)
            scanf("%d",&matrix[i][j]);
    }
    }
    printf("ENTERED DATA IS");
   for(i=0;i<3;i++)
   {printf("\n");
   for(j=0;j<3;j++)
    {
        printf("\t %d \t",matrix[i][j]);
    }

    }
    for(i=0;i<3;i++)
   {for(j=0;j<3;j++)
    {
        transpmatrix[i][j]=matrix[j][i];
    }}
    printf("\nTHE TRANSPOSED RESULT IS");
    for(i=0;i<3;i++)
   {printf("\n");
   for(j=0;j<3;j++)
    {
        printf("\t %d \t",transpmatrix[i][j]);
    }
    }return 0;
}
