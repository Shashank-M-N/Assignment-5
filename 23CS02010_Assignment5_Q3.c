#include<stdio.h>

int main()
{
    int n,a[4],i=0;
    printf("Enter a 4 digit number: ");
    scanf("%d",&n);
    while(n) {
        a[i++]=n%10;
        n/=10;
    }
    for(i=0;i<4;i++)
        for(int j=0 ;j<4;j++)
            for(int k=0;k<4;k++) 
                if(j==i||j==k||i==k)
                    continue;
                else
                    printf("%d\n",a[i]*1000+a[j]*100+a[k]*10+a[6-i-j-k]);
    return 0;
}