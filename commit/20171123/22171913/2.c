#include <stdio.h>
int bin_insert(int n, int m, int j, int i);
int main()
{
    int n, m, j, i;
    printf("Please input: ");
    scanf("%d %d %d %d", &n, &m, &j, &i);
    printf("%d\n", bin_insert(n, m, j, i));
    return 0;
}
int bin_insert(int n, int m, int j, int i)
{
    m <<= j;
    return n | m;
}
