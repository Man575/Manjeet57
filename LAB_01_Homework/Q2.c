#include <stdio.h>

// Function to swap two numbers using call by reference
void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int main() {
    // 1. Declare int x = 25 and a pointer p to it.
    int x = 25;
    int *p = &x;

    // Print the value of x, the address &x, the value stored in p, and *p.
    printf("Value of x: %d\n", x);
    printf("Address of x (&x): %p\n", (void*)&x);
    printf("Value stored in p: %p\n", (void*)p);
    printf("Value pointed to by p (*p): %d\n\n", *p);

    // 2. Using only the pointer, change x to 100 and print x to confirm.
    *p = 100;
    printf("After changing using pointer (*p = 100):\n");
    printf("New value of x: %d\n\n", x);

    // 3. Swap two numbers read from the user.
    int num1, num2;
    printf("Enter two numbers to swap: ");
    scanf("%d %d", &num1, &num2);
    
    swap(&num1, &num2);
    printf("After swap: %d %d\n", num1, num2);

    return 0;
}