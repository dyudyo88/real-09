#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{
//���� �о ���� ���

FILE *fp;
char input;

fp=fopen("sample.txt,","r");


while((input = fgetc(fp))!=EOF) //���� ���� EOF�� �ƴҶ����� ��� �ݺ�
{
	putchar(input); 
} 


}
