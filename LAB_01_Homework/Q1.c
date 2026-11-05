#include <stdio.h>

int main() {
    int n;
    
    // Read n
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int a[n];
    int *p = a; 

    // 1. Read n integers into an array
    printf("Enter %d integers: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", (p + i)); 
    }
    
    // Print them using pointer arithmetic *(p+i), not a[i]
    printf("Array elements: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");
    
    // 2. Find the largest element by walking the array with a pointer.
    int max = *p; // Initialize max with the first element (*p)
    int *walk_ptr = a; // Pointer to walk the array
    
    for(int i = 0; i < n; i++) {
        if(*walk_ptr > max) {
            max = *walk_ptr;
        }
        walk_ptr++; // Walk to the next memory address
    }
    
    printf("Largest = %d\n\n", max);
    
    // 3. In one sentence, explain why a[i] and *(a+i) give the same element:
    printf("Answer to Q2.3:\n");
    printf("An array name acts as a base memory address pointer, so adding 'i' to 'a' shifts the address 'i' places forward, and dereferencing it with '*' yields the exact same value as indexing it with 'a[i]'.\n");
    
    return 0;
}