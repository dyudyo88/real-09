 #include <stdio.h> 
 #include <stdlib.h>  
 
int main (void) 
{ 
char src[100] = "Programming course"; 
char dst[100]; 
  	 
//src������ dst�� �ű�. 
int i=0; 
	 
while(src[i] !='\0') 
{
	dst[i]=src[i]; 
	i++; 
} 
	dst[i]='\0'; //���ڿ��� ������.     	 
	printf("%s\n",dst);   	 
 	return 0; 
 }

