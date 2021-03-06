#include <stdio.h>
int binary_search_recursive(int arr[], int left, int right, int query);
int binary_search_iterative(int arr[], int left, int right, int query);

int main()
{
   int arr[100];
   int left, right, query;
   int i;
   scanf("%d %d %d", &left, &right, &query);
   for(i = 0; i < right; i++)
   {
       scanf("%d", &arr[i]);
   }
   printf("%d\n", binary_search_recursive(arr, left, right, query));
   printf("%d\n", binary_search_iterative(arr, left, right, query));
   return 0;
}

int binary_search_recursive(int arr[], int left, int right, int query)
{
   int mid;
   if(left > right)
      return -1;
   else
   {
      if(arr[left] == query)
         return left;
      if(arr[right] == query)
         return right;
      mid = (left + right) / 2;
      if(arr[mid] == query)
         return mid;
      if(arr[mid] < query)
         binary_search_recursive(arr, mid + 1, right, query);
      if(arr[mid] > query)
         binary_search_recursive(arr, left, mid - 1, query);
   }
}

int binary_search_iterative(int arr[], int left, int right, int query)
{
   int mid;
   while(left <= right)
   {
         if(arr[left] == query)
            return left;
         if(arr[right] == query)
            return right;
         mid = (left + right) / 2;
         if(arr[mid] == query)
            return mid;
         if(arr[mid] < query)
            left = mid + 1;
         if(arr[mid] > query)
            right = mid - 1;
   }
   if(left > right)
   return -1;
}
