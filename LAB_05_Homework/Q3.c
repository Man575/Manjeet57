#include <stdio.h>

void generateSubsets(int a[], int n, int index, int subset[], int subsetSize, int *count) {
    if (index == n) {
        printf("{");
        for (int i = 0; i < subsetSize; i++) {
            printf("%d", subset[i]);
            if (i < subsetSize - 1) {
                printf(" ");
            }
        }
        printf("} ");
        (*count)++;
        return;
    }
    
    generateSubsets(a, n, index + 1, subset, subsetSize, count);
    
    subset[subsetSize] = a[index];
    generateSubsets(a, n, index + 1, subset, subsetSize + 1, count);
}

int main() {
    int n;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int a[n];
    printf("Enter %d distinct elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    int subset[n];
    int count = 0;
    
    generateSubsets(a, n, 0, subset, 0, &count);
    printf("\nCount = %d\n", count);
    
    return 0;
}