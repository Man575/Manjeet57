#include <stdio.h>

// Write void reverse (int a[], int n) that reverses the array in place
void reverse(int a[], int n) {
    int temp;
    for(int i = 0; i < n / 2; i++) {
        // Swap elements from the front and back
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }
}

int main() {
    int n;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int a[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    // Call the function to reverse the array in place
    reverse(a, n);
    
    // Print the array in main afterwards to show the change stuck
    printf("Output: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    
    return 0;
}