#include <stdio.h>
#include <stdlib.h>

int main() {
	int x =6;
	int *ptr;
	ptr = &x;
	// dia chi 
	printf("dia chi cua bien x : %d \n",&x);
	printf("dia chi cua con tro ptr : %d\n",ptr); 
	// gia tri 
	printf("gia tri cua bien x : %d\n",x);
	printf("gia tri cua bien ptr : %d",*ptr);
	
    return 0;
}


