#include<stdio.h>
// B2:
void update(int *arr, int new, int index);


int main() {
    // B1:
    int arr[] = {5, 10, 15, 20, 25};

    // B4:
    update(arr, 100, 2);

    // OUTPUT
    for(int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}


// B3:
void update(int *arr, int new, int index) {
    *(arr + index) = new;
}

