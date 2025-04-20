// Copyright 2025 Matheus G. Dias
#include <stdio.h>

int main() {
  int c, prev;

  while ((c = getchar()) != EOF) {
    if (c == ' ' && prev == ' ')
      continue;

    putchar(c);
    prev = c;
  }
}
