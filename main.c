 #include <stdio.h> 
 #include <stdlib.h>  
 
int main (void) 
{ 
char src[100] = "Programming course"; 
char dst[100]; 
  	 
//src내용을 dst로 옮김. 
int i=0; 
	 
while(src[i] !='\0') 
{
	dst[i]=src[i]; 
	i++; 
} 
	dst[i]='\0'; //문자열이 끝났다.     	 
	printf("%s\n",dst);   	 
 	return 0; 
 }

