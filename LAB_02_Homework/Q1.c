#include <stdio.h>

// Write int countEven (int a[], int n) that returns how many elements are even
int countEven(int a[], int n) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    
    // Read the array in main
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int a[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    // Print the count
    int result = countEven(a, n);
    printf("Even numbers = %d\n", result);
    
    return 0;
}