#include <stdio.h>

// Define struct Student
struct Student {
    char name[50];
    int roll;
    float marks;
};

// 1. Adds g grace marks to every student
void addGrace(struct Student a[], int n, float g) {
    for(int i = 0; i < n; i++) {
        a[i].marks += g;
    }
}

// 2. Returns how many have marks >= cut
int countPass(struct Student a[], int n, float cut) {
    int passCount = 0;
    for(int i = 0; i < n; i++) {
        if(a[i].marks >= cut) {
            passCount++;
        }
    }
    return passCount;
}

int main() {
    int n;
    
    printf("Enter number of students: ");
    scanf("%d", &n);
    
    struct Student students[n];
    
    for(int i = 0; i < n; i++) {
        printf("Enter Name, Roll, and Marks for student %d: ", i + 1);
        scanf("%s %d %f", students[i].name, &students[i].roll, &students[i].marks);
    }
    
    // Add 5 grace marks[cite: 6].
    addGrace(students, n, 5.0);
    
    printf("After grace: ");
    for(int i = 0; i < n; i++) {
        printf("%.0f ", students[i].marks);
    }
    
    // Print how many pass at cutoff 40[cite: 6].
    int passed = countPass(students, n, 40.0);
    printf("\nPassed = %d\n", passed);
    
    return 0;
}