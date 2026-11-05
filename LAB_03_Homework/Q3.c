#include <stdio.h>

int main() {
    int n, key;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int a[n];
    printf("Enter %d sorted elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    printf("Enter key: ");
    scanf("%d", &key);
    
    int linear_cmp = 0;
    for(int i = 0; i < n; i++) {
        linear_cmp++;
        if(a[i] == key) {
            break;
        }
    }
    
    int binary_cmp = 0;
    int low = 0, high = n - 1;
    
    while(low <= high) {
        binary_cmp++;
        int mid = low + (high - low) / 2;
        
        if(a[mid] == key) {
            break;
        } else if(a[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    printf("Linear = %d, Binary = %d\n", linear_cmp, binary_cmp);
    
    return 0;
}