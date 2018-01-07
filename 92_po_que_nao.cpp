#include <bits/stdc++.h>

using namespace std;

#define MAXM 3

int N, M[MAXM];

int main() {
  cin >> N;

  for (int i = 0; i < MAXM; i++) {
    cin >> M[i];
  }

  sort(M, M + MAXM);

  int count = 0;
  for (int i = 0; i < MAXM; i++) {
    N = N - M[i];
    if (N < 0)
      break;
    else
      count++;
  }

  cout << count;

  return 0;
}