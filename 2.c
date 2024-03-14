#include <stdio.h>
#include <string.h>

int ssCompare(char *r, char *s, int j, int k) {
  // Se as sequências tiverem tamanhos diferentes, a menor é a que tem o menor tamanho.
  if (j < k) {
    return 1;
  } else if (j > k) {
    return -1;
  }

  // Percorre os elementos das sequências comparando-os.
  for (int i = 1; i <= j; i++) {
    if (r[i] < s[i]) {
      return 1;
    } else if (r[i] > s[i]) {
      return -1;
    }
  }

  // As sequências são iguais.
  return 0;
}

int main() {
  char r[] = "123";
  char s[] = "124";

  int resultado = ssCompare(r, s, strlen(r), strlen(s));

  if (resultado == 1) {
    printf("A sequência r é lexicograficamente menor que a sequência s.\n");
  } else if (resultado == 0) {
    printf("As sequências r e s são lexicograficamente iguais.\n");
  } else {
    printf("A sequência r é lexicograficamente maior que a sequência s.\n");
  }

  return 0;
}
