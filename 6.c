#include <stdio.h>

int max_crescente(int *arr, int n, int i, int curr_len, int max_len) {
  if (i == n) {
    return max_len;
  }

  // Se o elemento atual for maior que o anterior, atualize o comprimento do segmento atual
  if (arr[i] > arr[i - 1]) {
    curr_len++;
  } else {
    curr_len = 1;
  }

  // Atualize o comprimento máximo do segmento
  if (curr_len > max_len) {
    max_len = curr_len;
  }

  // Recursão: avance para o próximo elemento
  return max_crescente(arr, n, i + 1, curr_len, max_len);
}

int main() {
  int arr1[] = {5, 10, 3, 2, 4, 7, 9, 8, 5};
  int n1 = sizeof(arr1) / sizeof(arr1[0]);

  int arr2[] = {10, 8, 7, 5, 2};
  int n2 = sizeof(arr2) / sizeof(arr2[0]);

  int max_len1 = max_crescente(arr1, n1, 1, 1, 1);
  int max_len2 = max_crescente(arr2, n2, 1, 1, 1);

  printf("Comprimento máximo do segmento crescente na sequência 1: %d\n", max_len1);
  printf("Comprimento máximo do segmento crescente na sequência 2: %d\n", max_len2);

  return 0;
}
