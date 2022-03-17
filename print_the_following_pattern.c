#include<stdio.h>
int main()
{
    int n,j,k,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1,k=1;j<=n;j++)
        {
            if(j>n-3)
            {
                while(k!=0)
                {
                printf("%d",k);
                k--;
                }
            }
            else
            {
                printf("%d",j);
                k++;
            }
        }printf("
");
    }
}