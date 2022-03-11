#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
		for(j=n-i,k=1;j<n;j++,k++)
        {
            printf("%d",k);
        }
        printf("\n");
    }
}
