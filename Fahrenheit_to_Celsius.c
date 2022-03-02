#include<stdio.h>
int main()
{
    float f,c;
    scanf("%f",&f);
    c=(f-32)*100;
    c = c / 180;
    printf("%.2f",c);
}