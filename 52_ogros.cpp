#include <bits/stdc++.h>

int busca_binaria(int vetor[], int begin, int end, int key) {
  int ini = begin, fim = end, meio, menor_resp = -1;

  while (ini <= fim) {
    meio = (ini + fim) / 2;

    // printf("i:%d m:%d f:%d r:%d k:%d p:%d\n", ini, meio, fim, menor_resp, key,
    //        vetor[meio]);

    if (vetor[meio] == key) {
      return meio + 1;
    }

    if (vetor[meio] > key) {
      fim = meio - 1;
      menor_resp = meio;
    }

    if (vetor[meio] < key) {
      ini = meio + 1;
    }
  }

  return menor_resp;
}

int main() {
  int numeros_de_faixas_de_premiacoes, numero_de_ogros;
  scanf("%d %d", &numeros_de_faixas_de_premiacoes, &numero_de_ogros);

  int faixas_premiacoes[numeros_de_faixas_de_premiacoes - 1];
  for (int i = 0; i < numeros_de_faixas_de_premiacoes - 1; i++) {
    scanf("%d", &faixas_premiacoes[i]);
  }

  int premiacoes[numeros_de_faixas_de_premiacoes];
  for (int i = 0; i < numeros_de_faixas_de_premiacoes; i++) {
    scanf("%d", &premiacoes[i]);
  }

  int forca_ogros[numero_de_ogros];
  for (int i = 0; i < numero_de_ogros; i++) {
    scanf("%d", &forca_ogros[i]);
  }

  for (int i = 0; i < numero_de_ogros; i++) {
    int index =
        busca_binaria(faixas_premiacoes, 0, numeros_de_faixas_de_premiacoes - 1,
                      forca_ogros[i]);
    printf("%d", premiacoes[index]);
    if (i < numero_de_ogros - 1)
      putchar(' ');
  }

  return 0;
}