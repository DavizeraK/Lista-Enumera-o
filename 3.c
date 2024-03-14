#include <stdio.h>
#include <stdbool.h>

bool eh_subsequencia(char *a, int n, char *s, int k) {
  int i, j;

  // Comece comparando o primeiro caractere de ambas as sequências
  i = j = 0;

  // Continue enquanto ambos os índices forem válidos e os caracteres coincidirem
  while (i < n && j < k && a[i] == s[j]) {
    i++;
    j++;
  }

  // Se o índice de s chegou ao final, significa que a sequência s é uma subsequência de a
  return j == k;
}

int main() {
  char a[] = "soldado";
  char s[] = "sol";

  if (eh_subsequencia(a, strlen(a), s, strlen(s))) {
    printf("A sequência '%s' é uma subsequência de '%s'\n", s, a);
  } else {
    printf("A sequência '%s' não é uma subsequência de '%s'\n", s, a);
  }

  return 0;
}
