#include <stdio.h>

static int sort(int *array, int low, int high)
{
    int tmp = array[low];
    while(low < high){
        while(low < high && array[high] >= tmp)
            high--;
        array[low] = array[high];
        while(low < high && array[low] <= tmp)
            low++;
        array[high] = array[low];
    }
    array[low] = tmp;
    return low;
}

static void quickSort(int *array, int low, int high)
{
    int mid = 0;
    if(low < high){
        mid = sort(array, low, high);
        quickSort(array, low, mid);
        quickSort(array, mid+1, high);
    }
}

void quick_sort(int *array, int len)
{
    if(len < 2)
        return;
    quickSort(array, 0, len - 1);
}
