#include<stdio.h>
int main ()
{
	int a[5][5][5],i,j,k;
    for(k=0;k<3;k++)
    {
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                printf("\n enter a[%d][%d][%d]:",k,i,j);
                scanf(" %d",&a[k][i][j]);			
            }	
        }	
    }
    for(k=0;k<3;k++)
    {
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                if(i == 0 && j==0){
                    printf("\n\n");
                }						
                printf("\t %d",a[k][i][j]);
            }
            printf("\n ");
        }
    }
	return 0;
}