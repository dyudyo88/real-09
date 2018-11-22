#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{
//파일 읽어서 내용 출력

FILE *fp;
char input;

fp=fopen("sample.txt,","r");


while((input = fgetc(fp))!=EOF) //받은 값이 EOF가 아닐때까지 계속 반복
{
	putchar(input); 
} 


}
