#include <bits/stdc++.h>

int count = 0;

int busca_binaria(int list[], int begin, int end, int key) {
  count++;
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
  int N = 0;
  scanf("%d", &N);

  int numbers[N];
  for (int i = 0; i < N; i++) {
    scanf("%d", &numbers[i]);
  }

  int key = 0;
  do {
    scanf("%d", &key);
    count = 0;
    int result = busca_binaria(numbers, 0, N, key);
    if (result >= 0) {
      printf("TRUE Position (%d) Element (%d) Count (%d)\n", result, numbers[result], count);
    } else {
      printf("FALSE Count (%d)\n", count);
    }
  } while (key != 0);
  return 0;
}