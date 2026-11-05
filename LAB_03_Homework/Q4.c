#include <stdio.h>

int main() {
    int m, n, key;
    
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);
    
    int a[m][n];
    printf("Enter the matrix elements: ");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("Enter key: ");
    scanf("%d", &key);
    
    int found = 0;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(a[i][j] == key) {
                printf("Found at (%d, %d)\n", i, j);
                found = 1;
                break;
            }
        }
        if(found) {
            break;
        }
    }
    
    if(!found) {
        printf("Not found\n");
    }
    
    return 0;
}