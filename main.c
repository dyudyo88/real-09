#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{
//���� �о ���� ��� sol2

FILE *fp;
char input[100];

fp=fopen("sample.txt,","r"); //������ �̸��� ��Ȯ�� �Է������ �Ѵ�. 

while( fgets(input,100,fp)!=NULL)
{
	printf(input);
}

fclose(fp);

return 0; 

}
