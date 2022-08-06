#include <stdio.h>

#define MAX_INPUT_LEN 2000

int main() {
    int lines[MAX_INPUT_LEN];
    int i, j, increase_counter;

    for (i=0; i < MAX_INPUT_LEN; i++) {
        scanf("%d", &lines[i]);
        printf("%d\n", lines[i]);
    }
    increase_counter = 0;
    for (j=0; j < MAX_INPUT_LEN-3; j++) {
        if (lines[j] - lines[j+3] < 0) {increase_counter++;}
    }
    printf("%d\n", increase_counter);
    return 0;
}