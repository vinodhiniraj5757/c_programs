#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("enter the three numbers");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b&&a>c)
        printf("a is the greatest number %d",a);
    else if (b>a&&b>c)
        printf("b is the greatest number %d",b);
    else
        printf("c is the greatest number %d",c);
}
