// Copyright 2025 Matheus G. Dias
#include <stdio.h>

int main() {
  int c, counter;

  counter = 0;
  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n')
      ++counter;
  }

  printf("Counter: %d\n", counter);
}
