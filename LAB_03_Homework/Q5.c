#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int a[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    int max = INT_MIN;
    int second_max = INT_MIN;
    
    for(int i = 0; i < n; i++) {
        if(a[i] > max) {
            second_max = max;
            max = a[i];
        } else if(a[i] > second_max && a[i] != max) {
            second_max = a[i];
        }
    }
    
    printf("Second largest = %d\n", second_max);
    
    return 0;
}