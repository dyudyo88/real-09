#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{
//단어 검색, strncmp->검색할 단어길이를 제한할 수 있다.
//strncmp(문자열1, 문자열2, N) N은 길이
//strlen()함수를 이용하면 길이를 알 수 있음.

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
