#include <stdio.h>

// Using pointer parameters to return two results
void minMax(int a[], int n, int *mn, int *mx) {
    // Initialize both min and max to the first element
    *mn = *mx = a[0];
    
    for (int i = 1; i < n; i++) {
        if (a[i] < *mn) {
            *mn = a[i];
        }
        if (a[i] > *mx) {
            *mx = a[i];
        }
    }
}

int main() {
    int n, min, max;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int a[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    // Call the function passing the addresses of min and max
    minMax(a, n, &min, &max);
    
    // Print them in main
    printf("Min = %d, Max = %d\n", min, max);
    
    return 0;
}