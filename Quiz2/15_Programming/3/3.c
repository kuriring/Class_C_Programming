#include <stdio.h>
 
#define ARRAY_INIT(array, size, value) { int i; for(i=0; i<size; i++) array[i] = value; }
 
int main() {
    int arr[10];
    int value;
    int i;
 
    printf("배열의 값을 지정하세요: ");
    scanf("%d", &value);
 
    ARRAY_INIT(arr, 10, value);
    for(i=0; i<10; i++)
        printf("%d ", arr[i]);
    printf("\n");
 
    return 0;
}
