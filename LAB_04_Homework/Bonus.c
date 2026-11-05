#include <stdio.h>

void reverseRecursive(int a[], int start, int end) {
    if (start >= end) {
        return;
    }
    
    int temp = a[start];
    a[start] = a[end];
    a[end] = temp;
    
    reverseRecursive(a, start + 1, end - 1);
}

int main() {
    int n;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int a[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    reverseRecursive(a, 0, n - 1);
    
    printf("Output: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    
    return 0;
}