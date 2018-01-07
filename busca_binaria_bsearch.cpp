#include <bits/stdc++.h>

int comp(const void* a, const void* b)
{
    int aa = *((int*)a);
    int bb = *((int*)b);
    // printf("CMP %d > %d = %d\n", aa, bb, aa > bb);
    if ( aa < bb) return -1;
    if ( aa > bb) return 1;
    return 0;
}

int main() 
{
    int N = 0;
    scanf("%d", &N);

    int numbers[N];
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &numbers[i]);
    }
    
    int Q = 0;
    do 
    {
        scanf("%d", &Q);
        void* result = bsearch(&Q, numbers, N, sizeof(int), comp);
        if (result != NULL) {
            printf("TRUE %d\n", *((int*) result));
        } else {
            printf("FALSE\n");
        }
    } while (Q != 0);
    return 0; 
}