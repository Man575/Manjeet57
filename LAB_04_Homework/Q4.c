#include <stdio.h>

void selectionSortDescending(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int max_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] > a[max_idx]) {
                max_idx = j;
            }
        }
        if (max_idx != i) {
            int temp = a[i];
            a[i] = a[max_idx];
            a[max_idx] = temp;
        }
    }
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
    
    selectionSortDescending(a, n);
    
    printf("Output: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    
    return 0;
}