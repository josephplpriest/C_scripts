//headers

#include <stdio.h>

// main function
int main(void) {

//initialize variables
    // total
    float total = 0;
    // grade
    float grade = 0;
    // average
    float average;
    int counter = 0;
    int x;

    while (grade != -1) {
        total += grade;
        printf("%s", "Input a grade: ");
        scanf("%f", &grade);
        if (grade == -1) {break;}
        counter += 1;
    }

    average = total / counter;

    printf("%f is the class average.\n", average);
}