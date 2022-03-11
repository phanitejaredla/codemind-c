#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(i=n,k=1;i>0;i--,k++)
    {
		for(j=n;j>=0;j--)
        {
            printf("%d",k);
        }
        printf("\n");
    }
}
