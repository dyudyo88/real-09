#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{	//�Է¹��� ���ڰ� �޸��忡 �߰� �ϴ� ���α׷���  
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
