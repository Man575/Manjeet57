#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

void swapStudents(struct Student *a, struct Student *b) {
    struct Student temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    struct Student s1 = {"Asha", 12, 38.0};
    struct Student s2 = {"Ravi", 7, 44.0};
    
    printf("Before swap:\n");
    printf("Student 1: %s (Roll: %d, Marks: %.1f)\n", s1.name, s1.roll, s1.marks);
    printf("Student 2: %s (Roll: %d, Marks: %.1f)\n", s2.name, s2.roll, s2.marks);
    
    swapStudents(&s1, &s2);
    
    printf("\nAfter swap:\n");
    printf("Student 1: %s (Roll: %d, Marks: %.1f)\n", s1.name, s1.roll, s1.marks);
    printf("Student 2: %s (Roll: %d, Marks: %.1f)\n", s2.name, s2.roll, s2.marks);
    
    return 0;
}