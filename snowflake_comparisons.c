#include <stdio.h>

#define MAX_INPUT_LEN 10

int main() {
    int lines[MAX_INPUT_LEN];
    int i;

    for (i=0; i<10; i++) {
        scanf("%d", &lines[i]);
        printf("%d\n", lines[i] * 2);
    }
    return 0;
}