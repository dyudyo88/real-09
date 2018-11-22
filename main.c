#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{
//파일 복사 프로그램 실습 
FILE *fp, *fp2;
char input;
char original[100];
char copy[100];
int i=0;

printf("original file: ");
scanf("%s",original);
printf("copy file : ");
scanf("%s",copy);

fp = fopen(original,"r");
fp2 = fopen(copy,"w");

while( (input=fgetc(fp) ) != EOF)
{
	fputc(input, fp2);
	i++;
}
	printf("Copy succeed~ (%i Bytes coied)\n", i);
	
	fclose(fp);
	fclose(fp2);
	
	return 0;
}
