#include <stack>
#include <vector>
#include <cstdio>

using namespace std;

vector<stack<int>> torres;

int N = 30;
int movimentos = 0;

void move(int orig, int dest) {
  int d = torres[orig].top();
  torres[orig].pop();
  torres[dest].push(d);
  movimentos++;
}

void hanoi(int n, int orig, int dest, int temp)
{
  if (n == 1) {
    move(orig, dest);
  } else {
    hanoi(n-1, orig, temp, dest);
    move(orig, dest);
    hanoi(n-1, temp, dest, orig);
  }
}

int main() 
{
  int teste = 0;
  while (true) {
    scanf("%d", &N);
    if (N == 0) break;
    if (N != 0 && teste != 0) printf("\n\n");
    
    teste++;

    torres = vector<stack<int>>(3);
    for(int i = N; i > 0; i--)
    {
      torres[0].push(i);
    }
    movimentos = 0;
    hanoi(N, 0, 2, 1);
    printf("Teste %d\n%d", teste, movimentos);
  };
  return 0;
}