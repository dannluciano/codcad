#include <bits/stdc++.h>

using namespace std;

#define MAXM 100

int N, M;
pair<int, int> T[MAXM];

bool comp(pair<int, int> i, pair<int, int>  j) {
  return i.second < j.second;
}

int main() {
  cin >> N >> M;

  for (int i = 0; i < N; i++) {
    int cn = i + 1;

    int tt = 0;
    for (int j = 0; j < M; j++) {
      int t;
      cin >> t;
      tt += t;
    }

    T[i] = make_pair(cn, tt);
  }

  sort(T, T + N, comp);

  for (int i = 0; i < 3; i++) {
    cout << T[i].first << (i < 3-1 ? "\n" : "");
  }

  return 0;
}