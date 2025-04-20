// Copyright 2025 Matheus G. Dias
#include <stdio.h>

// Write a program the print its input one word per line.
int main() {
  int c;

  while ((c = getchar()) != EOF) {
    if (c == ' ')
      putchar('\n');
    else
      putchar(c);
  }
}
