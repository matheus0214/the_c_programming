// Copyright 2025 Matheus G. Dias
#include <stdio.h>

int main() {
  int c, i, acc;
  int lengths[1024];

  i = 0;
  acc = 0;
  while ((c = getchar()) != EOF) {
    if (c != ' ' && c != '\t' && c != '\n') {
      acc = acc + 1;
    } else {
      lengths[i] = acc;
      i = i + 1;
      acc = 0;
    }
  }

  printf("Word lengths histogram\n");
  for (int v = 0; v <= i; v++) {
    if (lengths[v]) {
      for (int c = 0; c < lengths[v]; c++)
        printf("*");

      printf("\n");
    }
  }
  printf("\n");

  return 0;
}
