#include <stdio.h>
int main()
{
    int Age;
    printf("enter your age:");
    scanf("%d",&Age);
    if(Age >= 18)
    {
        printf("you're eligible for voting");
    }
    else
    {
        printf("you are not eligible for voting");
    }
    return 0;
}
