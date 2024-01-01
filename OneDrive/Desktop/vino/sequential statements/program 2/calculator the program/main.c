#include <stdio.h>
#include <stdlib.h>

int main()
{
    char op;int a,b,c;
    printf("enter the operation you want to preform");
    scanf("%c",&op);
    printf("enter the value of 2 numbers");
    scanf("%d %d",&a,&b);
    switch(op)
    {
       case '+':
           {
            c=a+b;
            printf("the value of c is %d",c) ;
            break;
           }
       case '-':
       {
           c=a-b;
            printf("the value of c is %d",c) ;
            break;
       }
       case '*':
        {
            c=a*b;
            printf("the value of c is %d",c) ;
            break;
        }
        case '/':
        {
            c=a/b;
            printf("the value of c is %d",c) ;
            break;
        }
        default:
        printf("none of the option is excuted");

    }



}
