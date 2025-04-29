#include <stdio.h>

float fahrenheit_to_celsius();

int main() 
{
    fahrenheit_to_celsius();
    return 0;
}

float fahrenheit_to_celsius()
{
    printf("Temperature conversion\n");
    printf("Fahrenheiht to Celsius - 0° to 300°\n");

    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);

        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
