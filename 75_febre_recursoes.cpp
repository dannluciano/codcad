#include <iostream>
#include <vector>

using namespace std;

int n, k, m;

vector<long> a(n);
vector<long> f(n);

int main(const int arc, const char **argv) {
  cin >> n >> k >> m;

  a = vector<long>(n);
  f = vector<long>(k);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  for (int i = 0; i < n; i++) {
    cin >> f[i];
    // cout << "f(" << i + 1 << ") -> " << f[i] << endl;
  }

  for (int j = n; j != k; j++) {
    long sum = 0;
    for (int i = 0; i < n; i++) {
      // cout << a[i] * f[j-i-1] << " + ";
      sum += a[i] * f[j - i - 1];
    }
    // cout << endl;
    f[j] = sum % m;
    // cout << "f(" << j + 1 << ") -> " << sum << endl;
  }

  cout << f[k - 1] << endl;

  return 0;
}