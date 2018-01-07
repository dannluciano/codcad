#include <bits/stdc++.h>

using namespace std;

int main() {

  int N;
  cin >> N;

  int numbers[N];
  int sortedn[N];

  for (int i = 0; i < N; i++) {
    cin >> numbers[i];
    sortedn[i] = numbers[i];
  }

  sort(sortedn, sortedn + N);

  int count = 0;
  int dools[N];
  for (int i = 0; i < N; i++) {
    if (sortedn[i] != numbers[i])
      count++;
  }
  cout << count << endl;
  for (int i = 0; i < N; i++) {
    if (sortedn[i] != numbers[i])
      cout << sortedn[i] << (i < N - 1 ? " " : "");
  }
  return 0;
}