#include <stdio.h>
#include <stdlib.h>

//Pointer kullanarak girilen dizideki tüm elemanlarý toplayan program;

int main() {
	
	int i,h[10],sum=0,n;
	
	printf("Please enter the size of array(max 10): ");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		printf("h[%d]= ",i);
		scanf("%d",h+i);
		sum+= *(h+i);
	}
	
	printf("Sum of the elements in the array = %d",sum);
	
	
	return 0;
}
