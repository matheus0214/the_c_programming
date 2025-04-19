// Copyright 2025 Matheus G. Dias
#include <stdio.h>

int main() {
  int c;

  c = getchar();
  while (c != EOF) {
    putchar(c);
    c = getchar();
  }
}
