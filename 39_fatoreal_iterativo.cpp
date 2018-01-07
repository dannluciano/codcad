#include <cstdio>

int main() 
{
  int N;
  scanf("%d", &N);

  int fat = 1;
  for(int i = N; i >= 2; i--) 
  {
    fat *= i;
  }
  printf("%d", fat);
  return 0;
}