#include <stdio.h>

int main() {
    int n, key;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int a[n];
    printf("Enter %d rotated sorted elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    printf("Enter key: ");
    scanf("%d", &key);
    
    int low = 0, high = n - 1;
    int found_index = -1;
    
    while(low <= high) {
        int mid = low + (high - low) / 2;
        
        if(a[mid] == key) {
            found_index = mid;
            break;
        }
        
        if(a[low] <= a[mid]) {
            if(key >= a[low] && key < a[mid]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        } 
        else {
            if(key > a[mid] && key <= a[high]) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
    }
    
    if(found_index != -1) {
        printf("Found at index %d\n", found_index);
    } else {
        printf("Not found\n");
    }
    
    return 0;
}