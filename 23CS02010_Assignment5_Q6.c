#include<stdio.h>

int main()
{
    int n,c=0,s=0;
    char a[40],b[40];
    printf("Enter the size of character array: ");
    scanf("%d",&n);
    printf("Enter a character array: ");
    fflush(stdin);
    for(int i=0;i<n;i++)
        scanf(" %c",&a[i]);
    printf("Enter a word: ");
    fflush(stdin);
    gets(b);
    for(int i=0;b[i]!='\0';i++,s=i)
        for(int j=0;j<n;j++)
            if(b[i]==a[j]){
                c++;
                a[j]=0;
                break;
            }
    if(c==s)
        printf("The word can be produced.");
    else
        printf("The word can't be produced.");
}