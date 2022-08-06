#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    int n = 5;
    char (a[5])[3] = {"ab", "bc", "cd", "de", "ef"};
    int i;
    for (i=0; i<n; i++) 
        putchar(a[i][0]);
}