#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",count1_in_bin( n ) );
    return 0;
}
    int count1_in_bin( int n )
{
	if ( n==0 ) return 0;
	else return count1_in_bin( n / 2 ) + n % 2;
}
