#include <stdio.h>
#define M 4
#define K 5
#define N 6
void matrix_product(int mat1[][K],int mat2[][N],int product[][N]);
int main ()
{
   int mat1[M][K]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
   int mat2[K][N]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
   int product[M][N]={0};
   int i,j;
   matrix_product(mat1,mat2,product);
   for(i=0;i<M;i++)
   {
      for(j=0;j<N-1;j++)
      printf("%-5d",product[i][j]);
      printf("%d\n",product[i][N-1]);
   }
 return 0;
}
void matrix_product(int mat1[][K],int mat2[][N],int product[][N])
{
   int i,j,k;
   for(i=0;i<M;i++)
       for(j=0;j<K;j++)
           for(k=0;k<N;k++)
               product[i][j]+=mat1[i][j]*mat2[j][k];
}
