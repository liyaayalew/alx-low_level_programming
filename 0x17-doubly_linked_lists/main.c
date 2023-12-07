#include "lists.h"

int is_palindrome(int n) {
    int reverse = 0;
    int original = n;

    while (n > 0) {
        reverse = reverse * 10 + (n % 10);
        n = n / 10;
    }

    return original == reverse;
}

int main(void) {
    int largest_palindrome = 0;

    for (int i = 100; i < 1000; i++) {
        for (int j = 100; j < 1000; j++) {
            int product = i * j;
            if (is_palindrome(product) && product > largest_palindrome) {
                largest_palindrome = product;
            }
        }
    }

    FILE *file = fopen("102-result", "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fprintf(file, "%d", largest_palindrome);
    fclose(file);

    return 0;
}
