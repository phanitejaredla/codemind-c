#include<stdio.h>
int lcm(int a,int b)
{
    static int max=1;
    if(max%a==0 && max%b==0)
    return max;
    else
    {
        max++;
        lcm(a,b);
    }
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",lcm(a,b));
}
