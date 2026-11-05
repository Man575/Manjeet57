#include <stdio.h>

int recursiveBinarySearch(int a[], int low, int high, int key) {
    if (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (a[mid] == key) {
            return mid;
        }
        if (a[mid] > key) {
            return recursiveBinarySearch(a, low, mid - 1, key);
        }
        return recursiveBinarySearch(a, mid + 1, high, key);
    }
    return -1;
}

int main() {
    int n, key;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int a[n];
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    printf("Enter key: ");
    scanf("%d", &key);
    
    int result = recursiveBinarySearch(a, 0, n - 1, key);
    
    if (result != -1) {
        printf("Found at index %d\n", result);
    } else {
        printf("Not found\n");
    }
    
    return 0;
}