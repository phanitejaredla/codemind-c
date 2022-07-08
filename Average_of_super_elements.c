#include<stdio.h>
int main()
{
    int n,i,j,k=0,count=0;
    int arr[100];
    float sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j] && arr[i]>=0 && i!=j)
            {
                count++;
                arr[j]=-1;
            }
    
        }if(count+1==arr[i])
        {
            sum=sum+arr[i];
            k++;
        }
        
    }
    if(k==0)
    printf("-1");
    else
    printf("%.2f",sum/k);
}
