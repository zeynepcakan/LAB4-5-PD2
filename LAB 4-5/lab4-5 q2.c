#include <stdio.h>
#include <stdlib.h>

//pointer ile iki sayıyı toplama;

int main() {
	
	int h,z,sum=0;
	
	printf("please enter two numbers: \n");
	scanf(" %d %d",&h,&z);
	
	int *p1;
	int *p2;
	
	p1=&h;
	p2=&z;
	
	sum= *p1 + *p2 ;
	
	printf("Sum= %d",sum);
	
	return 0;
}
