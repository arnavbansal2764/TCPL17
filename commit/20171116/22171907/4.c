#include <stdio.h>

 void InsertionSort(int arr[], int left, int right)
{
    int i, j, temp;
    for (i = left+1; i < right; i++)
    {
        temp = arr[i];
        j = i-1;
        while ((j >= 0)&&(arr[j] > temp))
        {
            arr[j+1] = arr[j];
            j--;
        }
        if (j != (i-1))
        {
            arr[j+1] = temp;
        }
    }
}

 int main()
{
    int str[100], i;
    for (i = 0; i < 100; i++)
    {
        scanf("%d", &str[i]);
    }
    InsertionSort(str, 0, 100);
    for (i = 0; i<100; i++)
    {
        printf("%d ", str[i]);
    }
    printf("\n");
    return 0;
}
