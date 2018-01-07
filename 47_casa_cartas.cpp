#include <bits/stdc++.h>

using namespace std;

int N, M;

bool comp(int i, int j) {
  bool p_own = (i % M > j % M);
  bool d_own = ((i % M == j % M) && i / M > j / M);
  return (p_own || d_own);
}

int main() {
  cin >> N >> M;

  int V[N];
  for (int i = 0; i < N; i++) {
    cin >> V[i];
  }

  sort(V, V + N, comp);

  for (int i = 0; i < N; i++) {
    cout << V[i] << (i < N-1 ? " " : "");
  }

  return 0;
}