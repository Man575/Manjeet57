#include <stdio.h>

int countKey(int a[], int n, int key) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] == key) {
            count++;
        }
    }
    return count;
}

int main() {
    int n, key;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int a[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    printf("Enter key: ");
    scanf("%d", &key);
    
    int count = countKey(a, n, key);
    printf("%d appears %d times\n", key, count);
    
    return 0;
}