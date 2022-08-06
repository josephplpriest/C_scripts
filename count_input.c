#include <stdio.h>

int main() {
    long num_chars;
    char c;
    num_chars = 0;

    while ((c = getchar()) != EOF) {
        ++num_chars;
        printf("%s\n", c);
    }
    printf("%ld\n", num_chars);
}