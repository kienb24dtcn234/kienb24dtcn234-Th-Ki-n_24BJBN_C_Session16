#include<stdio.h>
int findIndex(int arr[]; int findItem);
int main(){
	int arr[]={10,20,30,40,50};
	int find=findIndex(arr, 10);
	printf("find %d\n", find);
	return 0;
}
int findIndex(int arr; int findItem){
	// Linear search
	int index = -1;
	int length = sizeof(*arr)/ \sizeof(int);
	
	for(int = 0; i < length; i++){
		if(arr[i]==findItem){
			index = i;
			break;
		}
	}
	return index;
}
