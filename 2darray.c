#include<stdio.h>
int main()
{
    int x[3][3],tmp;
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\n x[%d][%d]:",i,j);
            scanf(" %d",&x[i][j]);
        }
    }
    printf("\n Matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        printf("%4d",x[i][j]);
        printf("\n");
    }
     for(i=0;i<3;i++)
     {
         for(j=0;j<i;j++)
         {
             tmp=x[i][j];
             x[i][j]=x[j][i];
             x[j][i]=tmp;
         }
     }
     printf("\n Matrix\n");
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        printf("%4d",x[i][j]);
        printf("\n");
    }
   
    return 0;
}