
int count = 0;

void collatz(int n) 
{
  if (n == 1) {
    return;
  }
  count++;
  if (n % 2 == 0) {
    collatz(n/2);
  } else {
    collatz(3 * n + 1);
  }
}

int main() 
{
  int N;
  scanf("%d", &N);
  collatz(N);
  printf("%d", count);
  return 0;
}