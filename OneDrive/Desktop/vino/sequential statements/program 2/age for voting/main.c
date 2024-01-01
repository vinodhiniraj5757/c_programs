#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a;
    printf("enter your age a:");
    scanf("%d",&a);
    if(a>=18)
        printf("eligible for voting %d",a);
    else
        printf(" not eligible for voting %d",a);

}
