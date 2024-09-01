#include <stdio.h>

int main() {
    int arr_num[] = {4, 8, 2, 6, 7};  // Array initialization
    for (int i = 0; i < 5; i++) {     // Loop to print array elements
        printf("arr_num[%d] = %d \n", i, arr_num[i]);
    }
    
    printf("\nPrinting array values squared:\n");  // Print header
    for (int i = 0; i < 5; i++) {     // Loop to print squared values
        printf("%d\n", arr_num[i] * arr_num[i]);
    }
    
    return 0;
}

