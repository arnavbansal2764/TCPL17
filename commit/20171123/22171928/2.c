#include<stdio.h>
int bin_insert(int n,int m,int j,int i)
{
    n|=(m<<j);
    return n;
}
int main()
{
    int n,m,j,i;
    scanf("%d%d%d%d",&n,&m,&j,&i);
    printf("%d\n",bin_insert(n,m,j,i));
    return 0;
}
