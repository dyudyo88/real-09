#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{
   char src[100] = "Programming course";
   
   int i=0;
   
   while(src[i] !='\0')
   {
      i++;
   }
   printf("%s (%i)\n", src, i);
   printf("%i", strlen(src));
   
   return 0;
}
