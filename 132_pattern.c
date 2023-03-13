#include<stdio.h>
int main(){
    int i,j,a=0,k,sp=15;
    for(i=1;i<5;i++)   
    {   
        a = a + i;
        k = a;
        for(j=i;j<sp;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%3d",k); 
            k--;
        }
        sp-=2;
        printf("\n");
    }
}