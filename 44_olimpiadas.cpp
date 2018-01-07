#include <bits/stdc++.h>

using namespace std;

int N, M;

struct country {
  int id;
  int gold;
  int silver;
  int bronze;

  country() {
    gold = 0;
    silver = 0;
    bronze = 0;
  }
};

bool comp(country a, country b) {
  if (a.gold > b.gold)
    return true;
  if (a.gold == b.gold && a.silver > b.silver)
    return true;
  if (a.gold == b.gold && a.silver == b.silver && a.bronze > b.bronze)
    return true;
  if (a.gold == b.gold && a.silver == b.silver && a.bronze == b.bronze &&
      a.id < b.id)
    return true;

  return false;
}

int main() {
  cin >> N >> M;

  country C[N + 1];
  for (int i = 1; i <= N; i++) {
    C[i] = country();
    C[i].id = i;
  }

  for (int i = 0; i < M; i++) {
    int p;
    cin >> p;
    C[p].gold++;
    cin >> p;
    C[p].silver++;
    cin >> p;
    C[p].bronze++;
  }

  sort(C + 1, C + N + 1, comp);

  for (int i = 1; i <= N; i++)
    cout << C[i].id << (i < N ? " " : "");

  return 0;
}