#include<stdio.h>
unsigned setbits(unsigned x, int p, int n, unsigned y)  

{
    return x & ~(~(~0 << n) << (p+1-n)) | (y & ~(~0 << n)) << (p+1-n);  

}  
int main()  

{
    unsigned x = 13,y = 23;
    int p = 2,n = 3,s;
    s = setbits(x, p, n, y);  
    printf("%d\n", s);
    return 0; 
}
