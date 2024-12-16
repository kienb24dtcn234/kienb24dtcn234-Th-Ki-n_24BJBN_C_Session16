#include <stdio.h>
#include <stdlib.h>


void  tang(int x){
	x+=10;
}
void tang2(int *x){
	*x +=10;
}

int main() {
	int  x= 10;
	tang(x);
	printf("gia tri cua bien sau khi ham tang 1 ket thuc : %d\n",x);
	tang2(&x);
	printf("gia tri cua bien a sau khi ham tang 2 ket thuc : %d",x);
	
	
    return 0;
}


