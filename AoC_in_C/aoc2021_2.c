#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define INPUT_LINES 1
#define MAX_LEN 256

int main() {
    FILE* fp;
    fp = fopen("aoc2021_2.txt", "r");
    if (fp == NULL) {
      perror("Failed: ");
      return 1;
    }

    char buffer[MAX_LEN];
    while (fgets(buffer, MAX_LEN, fp))
    {
        // Remove trailing newline
        buffer[strcspn(buffer, "\n")] = 0;
        if (&buffer[0] == "u") {printf("Up\n");}

//        printf("%s\n", buffer);
    }

    fclose(fp);
    return 0;
}