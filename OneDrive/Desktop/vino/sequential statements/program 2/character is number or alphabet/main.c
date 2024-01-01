#include <stdio.h>
int main()
{
   char a;
   printf("enter  a");
   scanf("%c",&a);
   if(a>='a'&&a<='z'||a>='A'&&a<='Z')
   {
      printf("alphabets");
   }
   else
    printf("numbers");

}
