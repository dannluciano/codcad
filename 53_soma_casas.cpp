#include <bits/stdc++.h>

int busca_binaria(int list[], int begin, int end, int key) {
  int meio = (begin + end) / 2;
  int element = list[meio];
  if (element == key) {
    return meio;
  }
  if (meio == begin || meio == end)
    return -1;
  else if (element < key) {
    return busca_binaria(list, meio, end, key);
  } else if (element > key) {
    return busca_binaria(list, begin, meio, key);
  }
  return -1;
}

int main() {
  int numero_de_casas;
  scanf("%d", &numero_de_casas);

  int casas[numero_de_casas];
  for (int i = 0; i < numero_de_casas; i++) {
    scanf("%d", &casas[i]);
  }

  int soma_das_casas;
  scanf("%d", &soma_das_casas);

  for (int i = 0; i < numero_de_casas - 1; i++) {
    int restante = soma_das_casas - casas[i];
    int index = busca_binaria(casas, 0, numero_de_casas, restante);
    if (index != -1) {
      printf("%d %d", casas[i], casas[index]);
      return 0;
    }
  }
  return 0;
}