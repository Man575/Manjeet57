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
    
    int low = 0, high = n - 1;
    int floor = -1;
    int hasFloor = 0;
    
    while(low <= high) {
        int mid = low + (high - low) / 2;
        
        if(a[mid] == key) {
            floor = a[mid];
            hasFloor = 1;
            break;
        } else if(a[mid] < key) {
            floor = a[mid];
            hasFloor = 1;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    if(hasFloor) {
        printf("Floor = %d\n", floor);
    } else {
        printf("none\n");
    }
    
    return 0;
}