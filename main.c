#include <stdio.h>
#include "sort_func.h"

void dump(int *array, int len)
{
    int i = 0;
    for(i = 0; i < len; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}

#define LEN 9
int main(void)
{
    //int array[LEN] = {41, 42, 43, 44, 45, 46, 47};
    int array[LEN] = {47, 46, 45, 48, 44, 43, 42, 41, 49};
    //bubble_sort(array, sizeof(array)/sizeof(int));
    //select_sort(array, LEN);
    //insert_sort(array, LEN);
    //merge_sort(array, LEN);
    quick_sort(array, LEN);
    dump(array, sizeof(array)/sizeof(int));
    return 0;
}
