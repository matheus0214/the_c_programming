// Copyright 2025 Matheus G. Dias
#include <stdio.h>

int main() {
  int c;
  int verify = 1;

  while (verify == 1) {
    c = getchar();

    if (c == EOF) {
      printf("%d\n", c);
      verify = 2;
    }
  }
}
