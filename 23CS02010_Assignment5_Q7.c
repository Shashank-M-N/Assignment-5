#include<stdio.h>

int main()
{
    int a[10],n=10;
    printf("Enter the array:\n");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-1-i;j++)
            if(a[j]>a[j+1]) {
                a[j]+=a[j+1];
                a[j+1]=a[j]-a[j+1];
                a[j]-=a[j+1];
            }
    printf("The sorted array: \n");
    for(int i=0;i<n;i++)
        printf("%d\t",a[i]);
    return 0;
}