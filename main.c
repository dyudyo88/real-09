#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{
//�ܾ� �˻�, strncmp->�˻��� �ܾ���̸� ������ �� �ִ�.
//strncmp(���ڿ�1, ���ڿ�2, N) N�� ����
//strlen()�Լ��� �̿��ϸ� ���̸� �� �� ����.

FILE *fp;
char word[100]; 
char filename[100];
char input[100];

printf("file namel : ");
scanf("%s",filename);

fp = fopen(filename,"r");

printf("input a word to find :");
scanf("%s",word);

while( fgets(input, 100, fp)!= NULL)
{
	if (strncmp(input, word, strlen(word)) ==0 )
	{
		printf("find a word %s\n",input);
	}
	
}
	
}
