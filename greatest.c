#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a number:");
    printf("enter second number:");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("a is the greatest number");
    }
    else
    {
        printf("b is the greatest number");
    }
    return 0;
}