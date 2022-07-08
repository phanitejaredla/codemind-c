#include<stdio.h>
int gcd(int a,int b)
{
    while(b)
    {
        if(a>b)
        {
            int temp=a;
            a=b;
            b=temp;
        }
    
    if(a==0)
    {
        return b;
    }
    if(b==0)
    {
        return a;
    }
    b=b%a;
   }    
   return a;
}
int main()
{
    int n,i,hcf;
    int a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    hcf=gcd(a[0],a[1]);
    for(i=2;i<n;i++)
    {
        hcf=gcd(hcf,a[i]);
    }
    printf("%d",hcf);
}
