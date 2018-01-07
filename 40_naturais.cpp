#include <cstdio>

int soma(int n)
{
  if (n == 1) {
    return n;
  }
  return n + soma(n-1);
}

int main() 
{
  int N;
  scanf("%d", &N);
  printf("%d", soma(N));
  return 0;
}