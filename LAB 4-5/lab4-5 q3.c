#include <stdio.h>
#include <stdlib.h>

//dizinin elemanlarýný pointer kullanarak yazdýrma;

int main() {
	
	int i,x[100],n;
	
	printf("Please enter the array size: ");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		//scanf("%d",&x[i]);
		scanf("%d",x+i);
	}
	for(i=0; i<n; i++){
		//printf("x[%d]= %d\n",i,x[i]);
		printf("x[%d]= %d\n",i,*(x+i));
	}
	
	return 0;
}
