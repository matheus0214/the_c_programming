// Copyright 2025 Matheus G. Dias
#include <stdint.h>
#include <stdio.h>

int main() {
  int64_t nc;

  nc = 0;
  while (getchar() != EOF)
    ++nc;

  printf("The amount is: %ld\n", nc);
}
