#include <stdio.h>
#include <string.h>

int ssLex(char *r, char *s, int j, int k) {
  // Se as sequências tiverem tamanhos diferentes, a menor é a que tem o menor tamanho
  if (j < k) {
    return 1;
  } else if (j > k) {
    return 0;
  }

  // Percorre os elementos das sequências e compara 
  for (int i = 1; i <= j; i++) {
    if (r[i] < s[i]) {
      return 1;
    } else if (r[i] > s[i]) {
      return 0;
    }
  }

  // As sequências são iguais.
  return 0;
}

int main() {
  char r[] = "129";
  char s[] = "124";

  int menor = ssLex(r, s, strlen(r), strlen(s));

  if (menor) {
    printf("A sequência r é lexicograficamente menor que a sequência s.\n");
  } else {
    printf("A sequência r não é lexicograficamente menor que a sequência s.\n");
  }

  return 0;
}
