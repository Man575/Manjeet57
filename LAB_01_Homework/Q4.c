#include <stdio.h>

// 1. Define struct Student
struct Student {
    char name[50];
    int roll;
    float marks;
};

// 2. Function to update marks through a pointer
void update(struct Student *s, float m) {
    s->marks = m;
}

int main() {
    // 1. Point to one student with p and print all fields using the arrow operator
    struct Student s1 = {"Asha", 12, 88.5};
    struct Student *p = &s1;
    
    printf("--- Initial Details (Printed using arrow operator) ---\n");
    printf("Name: %s\n", p->name);
    printf("Roll: %d\n", p->roll);
    printf("Marks: %.1f\n", p->marks);
    
    // 2. Confirm the update function in main
    update(p, 95.5);
    printf("\n--- Details after update() ---\n");
    printf("Name: %s\n", p->name);
    printf("Roll: %d\n", p->roll);
    printf("Marks: %.1f\n", p->marks);
    
    // 3. (Stretch) Read n students into an array and find the topper using a pointer
    int n;
    printf("\nEnter the number of students for the stretch task: ");
    scanf("%d", &n);
    
    struct Student students[n];
    
    for(int i = 0; i < n; i++) {
        printf("Enter Name, Roll, and Marks for student %d: ", i + 1);
        scanf("%s %d %f", students[i].name, &students[i].roll, &students[i].marks);
    }
    
    struct Student *ptr = students; // Pointer to start of the array
    struct Student *topper = ptr;   // Assume first student is the topper initially
    
    // Move through the array using the pointer
    for(int i = 0; i < n; i++) {
        if((ptr + i)->marks > topper->marks) {
            topper = (ptr + i);
        }
    }
    
    printf("\n--- Topper Details ---\n");
    printf("Name: %s\n", topper->name);
    printf("Roll: %d\n", topper->roll);
    printf("Marks: %.1f\n", topper->marks);

    return 0;
}