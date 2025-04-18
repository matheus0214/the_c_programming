
// Copyright 2025 Matheus G. Dias
#include <stdio.h>

int main() {
  printf("Temperature conversion\n");
  printf("Celsius to Fahrenheiht - 0° to 300°\n");

  float fahr, celsius;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  celsius = lower;
  while (celsius <= upper) {
    fahr = (celsius * 9.0 / 5.0) + 32;

    printf("%3.0f°C %6.1f°F\n", celsius, fahr);
    celsius = celsius + step;
  }
}
