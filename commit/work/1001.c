#include <stdio.h> //include header files

int main()
{
    int n ,i;// declaring two variables
    scanf("%d",&n);//ask for an input by user in form of integer, this value gets stored in n named variable
    for ( i = 0; n!=1; i++ )//initialize for loop
    {
        if(n%2==0)
            n=n/2;
        else
            n=(3*n+1)/2;
    }
    printf("%d\n",i);
    return 0;
}
