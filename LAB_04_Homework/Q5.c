#include <stdio.h>

void bubbleSort(int a[], int n) {
    int swaps = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                swaps++;
            }
        }
    }
    
    printf("Sorted: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf(", Swaps = %d\n", swaps);
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
    
    bubbleSort(a, n);
    
    return 0;
}