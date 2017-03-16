#include <stdio.h>

static void merge(int *array, int start, int mid, int end)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int n1 = mid - start + 1;
    int n2 = end - mid;
    int left[n1], right[n2];
    for(i = 0; i < n1; i++)
        left[i] = array[start+i];
    for(j = 0; j < n2; j++)
        right[j] = array[mid+1+j];
    i = j = 0;
    k = start;
    while(i < n1 && j < n2){
        if(left[i] < right[j])
            array[k++] = left[i++];
        else
            array[k++] = right[j++];
    }
    while(i < n1)
        array[k++] = left[i++];
    while(j < n2)
        array[k++] = right[j++];
}

static void mergeSort(int *array, int start, int end)
{
    int mid = 0;
    if(start < end){
        mid = (start + end) / 2;
        mergeSort(array, start, mid);
        mergeSort(array, mid + 1, end);
        merge(array, start, mid, end);
    }
}

void merge_sort(int *array, int len)
{
    if(len < 2)
        return;
    mergeSort(array, 0, len - 1);
}
