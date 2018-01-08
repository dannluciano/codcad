#include <bits/stdc++.h>

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
    for (int j = i + 1; j < numero_de_casas; j++) {
      if (casas[i] + casas[j] == soma_das_casas) {
        printf("%d %d", casas[i], casas[j]);
      }
    }
  }
  return 0;
}