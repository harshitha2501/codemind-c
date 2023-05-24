#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,j,f=0,p=0;
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        for(j=1;j<=n;j++)
        if(j*j==arr[i])
        p+=arr[i];
    }
    printf("%d",p);
}