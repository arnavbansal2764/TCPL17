#include <stdio.h>
int main()
{
    int n,sum=0;
    for(n=2;n<=100;n+=2)
    sum+=n;
    printf("%d\n",sum);

    return 0;
}
