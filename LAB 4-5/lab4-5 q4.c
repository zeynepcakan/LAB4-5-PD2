#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Pointer kullanarak kelime boyutunu hesaplama;

int main(){
	
	char str[20], *p;
	int len;
	
	printf("Please enter a word : \n");
	gets(str);
	p = str;
	while (*p != '\0'){
		len++;
		p++;
	}
	printf("The lenght of the string that you entered is %d", len );
	return 0;
}
