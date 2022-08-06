#include <stdio.h>

// function main begins program execution
int main(void) {
    unsigned int counter; // number of next grade to add
    int grade; // last grade entered
    double total; // total to keep track of the sum
    double average; // average of all grades entered

    // initialization
    total = 0;
    counter = 1;

    // processing phase
    while (counter <= 10) { // loop 10 times
        printf("%s", "Enter grade: ");
        scanf("%d", &grade);
        total = total + grade;
        counter += 1;
    } // end loop

    average = total / 10;

    printf("Class average is %f\n", average);
}