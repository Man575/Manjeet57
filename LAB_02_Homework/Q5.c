#include <stdio.h>

float average(int a[], int n) {
    float sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    return sum / n;
}

int aboveAvg(int a[], int n, float avg) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > avg) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int a[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    float avg = average(a, n);
    int aboveCount = aboveAvg(a, n, avg);
    
    printf("Average = %.1f, Above = %d\n", avg, aboveCount);
    
    return 0;
}