#include <cstdio>
#include <cmath>

int main()
{
  int teste = 0;
  while (true)
  {
    int N = 30;
    scanf("%d", &N);
    if (N == 0)
      break;
    if (N != 0 && teste != 0)
      printf("\n\n");

    teste++;
    int movimentos = pow(2,N)-1;
    printf("Teste %d\n%d", teste, movimentos);
  }
}