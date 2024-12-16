#include <stdio.h>
#include <stdlib.h>

void IN(int *a){
	for(int i = 0 ; i<5; i++){
		printf("%d ",a[i]);
	}
}
int main() {
	int a[5]={5,8,3,6,4};
	IN(a);
    return 0;
}


