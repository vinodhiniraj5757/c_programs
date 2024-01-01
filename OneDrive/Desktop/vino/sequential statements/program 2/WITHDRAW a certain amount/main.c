#include <stdio.h>
#include <stdlib.h>

int main()
{
    int amount,balance=10000;
    printf("enter the amount");
    scanf("%d",&amount);
    if (amount<=balance)
        printf("you can withdraw the amount");
    else
        printf("you cannot withdraw the amount");

}
