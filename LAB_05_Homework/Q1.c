#include <stdio.h>

int main() {
    int n1, n2;
    
    printf("Enter the number of elements for array 1: ");
    scanf("%d", &n1);
    int a[n1];
    printf("Enter %d sorted elements: ", n1);
    for(int i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }
    
    printf("Enter the number of elements for array 2: ");
    scanf("%d", &n2);
    int b[n2];
    printf("Enter %d sorted elements: ", n2);
    for(int i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }
    
    int c[n1 + n2];
    int i = 0, j = 0, k = 0;
    
    while(i < n1 && j < n2) {
        if(a[i] <= b[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }
    
    while(i < n1) {
        c[k++] = a[i++];
    }
    
    while(j < n2) {
        c[k++] = b[j++];
    }
    
    printf("Output: ");
    for(int x = 0; x < n1 + n2; x++) {
        printf("%d ", c[x]);
    }
    printf("\n");
    
    return 0;
}