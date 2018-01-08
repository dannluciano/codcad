#include <bits/stdc++.h>

using namespace std;

int main() {

  int N;
  cin >> N;

  int numbers[N];

  for(int i = 0; i < N; i++) {
    cin >> numbers[i];
  }

  sort(numbers, numbers + N);

  for(int i = 0; i < N; i++) {
    cout << numbers[i] << (i < N-1 ? " " : "");
  }

  return 0;
}