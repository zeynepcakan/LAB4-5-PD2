#include <stdio.h>
#include <stdlib.h>

//dizinin elemanlar�n� pointer kullanarak yazd�rma;

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
