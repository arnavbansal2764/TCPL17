  #include <stdio.h>
  void SelectionSort(int arr[], int left, int right);
<<<<<<< HEAD
  
=======

>>>>>>> 4cf8c4e4af49134b907ed6e65c5c31cc1d10c94d
  int main()
  {
      int arr[100];
      int len, left, right;
      scanf("%d %d %d",&len,&left,&right);
      int i;
      for (i = 0;i < len; i++)
      {
          scanf("%d",&arr[i]);
      }
      SelectionSort(arr, left, right);
      return 0;
  }

  void SelectionSort(int arr[], int left, int right)
  {
      int i, j;
      for (j = left; j < right; j++)
      {
          int min = arr[j];
          int temp;
          for (i = j + 1; i <= right; i++)
          {
              if (arr[i] < min)
              {
                  temp = min;
                  min = arr[i];
                  arr[i] = temp;
              }
          }
          printf("%d ",min);
      }
      printf("%d\n",arr[right]);
  }
<<<<<<< HEAD
=======

>>>>>>> 4cf8c4e4af49134b907ed6e65c5c31cc1d10c94d
