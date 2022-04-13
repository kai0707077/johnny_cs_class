#include <stdio.h>

int main(void) {
    int arr[] = {10, 20, 30, 40, 50}; 
    int len = *(&arr + 1) - arr;
    int (*p)[5] = &arr;

    // printf("%p\n", arr);
    printf("%p\n", *(&arr+1));
    printf("%p\n", &arr+1);
    printf("%p\n", *(p+1));
    printf("%d\n", *(p)[2]);
    printf("%d\n", *(&arr+1)-arr);
    printf("%d\n", (arr+5)-arr);
    printf("%p\n", *(&arr));
    printf("%d\n", **(&arr));
    printf("%p\n", (&arr));

    return 0;
}