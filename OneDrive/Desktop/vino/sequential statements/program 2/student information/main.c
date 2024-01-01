#include <stdio.h>
#include <stdlib.h>
int main()
{
   int rollno,s1,s2,s3,s4,s5,total;float average;char name[46];
   printf("enter your name and roll no");
   scanf("%s %d",name,&rollno);
   printf("enter the 5 subject marks");
   scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
   total=s1+s2+s3+s4+s5;
   printf(" the total marks :%d \n",total);
   average=(s1+s2+s3+s4+s5)/5;
   printf("the average is %f \n",average);
   if(total>=450)
    printf("the grade is a");
   else if(total>=400)
    printf("the grade is b");
   else if(total>=350)
    printf("the grade is c");
   else if(total>=300)
    printf("the grade is d");
   else if(total>=350)
    printf("the grade is e");
   else
    printf("the grade is f");
}
