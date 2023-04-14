#include <stdio.h>
#include <stdlib.h>

void swap(int *el1, int *el2, int *el3);

int main() {
	
	int x=5, y=6, z=7;
	swap(&x,&y,&z);
	
	printf("x=%d \n",x);
	printf("y=%d\n",y);
	printf("z=%d\n",z);
	
	return 0;
}
void swap(int *el1, int *el2, int *el3){
	
	int gecici,gecici2;
	gecici=*el1;
	gecici2=*el2;
	*el1=*el3;
	*el2=gecici;
	*el3=gecici2;
	
}
