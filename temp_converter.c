#include <stdio.h>

int main(void) {
    int i;
    float fahr, celsius;

    for (i=0; i<31; i++) {
        fahr = i * 10;
        celsius = (fahr - 32) * 5 / 9;
        printf("Fahrenheit: %4.0f \t", fahr);
        printf("Celsius: %.2f\n", celsius);
    }

}