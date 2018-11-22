#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{	//입력받은 숫자가 메모장에 뜨게 하는 프로그래밍  
   FILE *fp;
   char input[100];
   int i;
   
   fp=fopen("sample.txt,","w");
   
   
   for(i=0;i<3;i++)
   {
   	printf("input a word : ");
   	scanf("%s",input);
   	fprintf(fp, "%s\n", input);
   }
   
   fclose(fp);
   
   return 0;
}
