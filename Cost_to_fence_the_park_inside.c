#include<stdio.h>
int main()
{
    int l,b,w,c,res;
    scanf("%d %d %d %d ",&l,&b,&w,&c);
    res=(l*b)-(l-2*w)*(b-2*w);
    res=res*c;
    if((l-2*w)<=0 || (b-2*w)<=0)
    printf("Impossible");
    else
    printf("%d",res);
}