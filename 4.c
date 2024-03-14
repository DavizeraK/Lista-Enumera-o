#include <stdio.h>
#include <stdbool.h>

bool ehSegmento(char *a, int n, char *s, int i, int j) {
  int k;

  for (k = i; k <= j; k++) {
    // Se o caractere em s não for igual ao caractere em a,
    // então s[i..j] não é um segmento de a[1..n]
    if (s[k - i] != a[k]) {
      return false;
    }
  }

  // Se todos os caracteres corresponderem, então s[i..j] é um segmento de a[1..n]
  return true;
}

int main() {
  char a[] = "abracadabra";
  char s[] = "racad";

  int i = 2;
  int j = 5;

  if (ehSegmento(a, strlen(a), s, i, j)) {
    printf("Sim, s[i..j] é um segmento de a[1..n]\n");
  } else {
    printf("Não, s[i..j] não é um segmento de a[1..n]\n");
  }

  return 0;
}
