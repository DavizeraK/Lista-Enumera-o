#include <stdio.h>

int subsequencias_iguais(int *sequencia, int n) { //A complexidade dessa função é O(n)
  int subsequencias = 1;
  int i;

  for (i = 1; i < n; i++) {
    // Se o número atual for igual ao anterior, incrementa a subsequência atual
    if (sequencia[i] == sequencia[i - 1]) {
      subsequencias++;
    } else {
      // Se o número atual for diferente, reinicia a contagem de subsequências
      subsequencias = 1;
    }
  }

  return subsequencias;
}

int main() {
  int sequencia1[] = {5, 2, 2, 3, 4, 4, 4, 4, 4, 1, 1};
  int n1 = sizeof(sequencia1) / sizeof(sequencia1[0]);

  int sequencia2[] = {3, 3, -1, -1, -1, 12, 12, 12, 3, 3};
  int n2 = sizeof(sequencia2) / sizeof(sequencia2[0]);

  int subsequencias1 = subsequencias_iguais(sequencia1, n1);
  int subsequencias2 = subsequencias_iguais(sequencia2, n2);

  printf("Sequência 1: %d subsequências\n", subsequencias1);
  printf("Sequência 2: %d subsequências\n", subsequencias2);

  return 0;
}