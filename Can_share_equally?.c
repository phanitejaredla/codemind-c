#include<stdio.h>
int main()
{
    int x;
    int y;
    scanf("%d %d",&x,&y);
    if ((x==0 || x%2==0) && y%2==0)
    {
        printf("YES");
    }
    else if(x!=0 && x%2==0 && y%2!=0 && (x+(y*2))%2==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
}