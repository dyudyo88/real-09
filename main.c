#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{
//파일 읽어서 내용 출력 sol2

FILE *fp;
char input[100];

fp=fopen("sample.txt,","r"); //파일의 이름을 정확히 입력해줘야 한다. 

while( fgets(input,100,fp)!=NULL)
{
	printf(input);
}

fclose(fp);

return 0; 

}
