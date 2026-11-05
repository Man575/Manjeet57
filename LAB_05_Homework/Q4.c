#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    
    int *L = (int *)malloc(n1 * sizeof(int));
    int *R = (int *)malloc(n2 * sizeof(int));
    
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];
        
    int i = 0, j = 0, k = left;
    
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
        }
    }
    
    while (i < n1) {
        arr[k++] = L[i++];
    }
    
    while (j < n2) {
        arr[k++] = R[j++];
    }
    
    free(L);
    free(R);
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int main() {
    int n;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int *a = (int *)malloc(n * sizeof(int));
    int *copy = (int *)malloc(n * sizeof(int));
    
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        copy[i] = a[i];
    }
    
    mergeSort(copy, 0, n - 1);
    
    int count = 1;
    int majority = -1;
    int found = 0;
    
    if (n == 1) {
        majority = copy[0];
        found = 1;
    } else if (n > 1) {
        for(int i = 1; i < n; i++) {
            if(copy[i] == copy[i - 1]) {
                count++;
            } else {
                count = 1;
            }
            
            if(count > n / 2) {
                majority = copy[i];
                found = 1;
                break;
            }
        }
    }
    
    if (found) {
        printf("Majority = %d\n", majority);
    } else {
        printf("No majority\n");
    }
    
    free(a);
    free(copy);
    
    return 0;
}