// Copyright 2025 Matheus G. Dias
#include <stdio.h>

int main() {
  int c;

  while ((c = getchar()) != EOF) {
    if (c == '\t')
      printf("\\t");
    else if (c == ' ')
      printf("\\b");
    else if (c == 92)
      printf("\\\\");
    else
      putchar(c);
  }
}
