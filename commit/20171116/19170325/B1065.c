#include <stdio.h>

int main(void)
{
   int couple[100001] = {0}, n, id1, id2, m, count = 0;

   scanf("%d", &n);
   for (int i = 0; i < n; i++)
   {
       scanf("%d%d", &id1, &id2);
       id1++;
       id2++;
       couple[id1] = id2;
       couple[id2] = id1;
   }
   scanf("%d", &m);
   for (int i = 0; i < m; i++)
   {
       scanf("%d", &id1);
       id1++;
       if (couple[id1])
           couple[id1] = 0;
       else
       {
          couple[id1] = -1;
          count++;
       }
   }
   for (int i = 0; i < 100001; i++)
      if (couple[i] > 0 && !couple[couple[couple[i]]])
      {
         couple[couple[i]] = -1;
         count++;
      }
   printf("%d\n", count);
   for (int i = 0; i < 100001; i++)
      if (couple[i] == -1)
         printf("%05d%c", i - 1, --count ? ' ' : '\0');
   printf("\n");

   return 0;
}
