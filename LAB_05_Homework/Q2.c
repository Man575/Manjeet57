#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int a[], int lo, int hi, int *comps) {
    int pivot = a[hi];
    int i = lo - 1;
    
    for (int j = lo; j < hi; j++) {
        (*comps)++;
        if (a[j] <= pivot) {
            i++;
            swap(&a[i], &a[j]);
        }
    }
    swap(&a[i + 1], &a[hi]);
    return i + 1;
}

void medianOfThree(int a[], int lo, int hi, int *comps) {
    if (hi - lo >= 2) {
        int mid = lo + (hi - lo) / 2;
        
        (*comps)++;
        if (a[mid] < a[lo]) swap(&a[lo], &a[mid]);
        
        (*comps)++;
        if (a[hi] < a[lo]) swap(&a[lo], &a[hi]);
        
        (*comps)++;
        if (a[hi] < a[mid]) swap(&a[mid], &a[hi]);
        
        swap(&a[mid], &a[hi]);
    }
}

void quickSort(int a[], int lo, int hi, int *comps) {
    if (lo < hi) {
        medianOfThree(a, lo, hi, comps);
        int pi = partition(a, lo, hi, comps);
        quickSort(a, lo, pi - 1, comps);
        quickSort(a, pi + 1, hi, comps);
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
    
    int comps = 0;
    quickSort(a, 0, n - 1, &comps);
    
    printf("Sorted: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\nComparisons: %d\n", comps);
    
    return 0;
}