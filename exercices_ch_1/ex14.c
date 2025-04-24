// Copyright 2025 Matheus G. Dias
#include <stdio.h>

// calculate the frequencey of each letter
int main() {
  int c, i;
  int chars[1024];
  int frequencies[1024];
  int found = -1;

  i = 0;
  while ((c = getchar()) != EOF) {
    if (c != ' ' && c != '\n' && c != '\t') {
      for (int v = 0; v < i; v++) {
        if (chars[v] == c) {
          frequencies[v] = frequencies[v] + 1;
          found = 1;
          break;
        }
      }
      if (found == -1) {
        // Not exists already
        chars[i] = c;
        frequencies[i] = 1;
        i = i + 1;
      }
    }
  }

  printf("Frequencies: \n");
  for (int k = 0; k < i; k++) {
    int val = frequencies[k];
    for (int v = 0; v < val; v++)
      printf("*");
    printf("\n");
  }

  return 0;
}
