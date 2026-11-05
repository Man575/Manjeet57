#include <stdio.h>

// 1. Define struct Book
struct Book {
    char title[100];
    char author[100];
    float price;
};

int main() {
    int n;
    
    printf("Enter the number of books: ");
    scanf("%d", &n);
    
    struct Book books[n];
    float sum_price = 0.0;
    
    // Read n books
    for(int i = 0; i < n; i++) {
        printf("Enter Title, Author, and Price for book %d: ", i + 1);
        scanf("%s %s %f", books[i].title, books[i].author, &books[i].price);
    }
    
    // Print them as a neat list
    printf("\n--- Book List ---\n");
    for(int i = 0; i < n; i++) {
        printf("%d. %s by %s (Rs. %.2f)\n", i + 1, books[i].title, books[i].author, books[i].price);
    }
    
    // Variables to track the most expensive book
    int max_index = 0;
    float max_price = books[0].price;
    
    // Calculate total price and find the most expensive
    for(int i = 0; i < n; i++) {
        sum_price += books[i].price;
        if(books[i].price > max_price) {
            max_price = books[i].price;
            max_index = i;
        }
    }
    
    // 2. Print the details of the most expensive book
    printf("\nCostliest: %s (%.1f)\n", books[max_index].title, books[max_index].price);
    
    // 3. Print the average price of all the books
    printf("Average %.1f\n", sum_price / n);
    
    return 0;
}