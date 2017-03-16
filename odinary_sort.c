#include <stdio.h>

void bubble_sort(int *array, int len)
{
    if(len < 2)
        return;
    int tmp = 0;
    int i = 0;
    int j = 0;
    for(i = 0; i < len - 1; i++){
        for(j = 0; j < len - i - 1; j++){
            if(array[j] > array[j+1]){
                tmp = array[j];
                array[j] = array[j+1];
                array[j+1] = tmp;
            }
        }
    }
}

void select_sort(int *array, int len)
{
    if(len < 2)
        return;
    int tmp = 0;
    int idx = 0;
    int i = 0;
    int j = 0;
    for(i = 0; i < len-1; i++){
        idx = i;
        for(j = i+1; j < len; j++){
            if(array[idx] > array[j])
                idx = j;
        }
        if(idx != i){
            tmp = array[i];
            array[i] = array[idx];
            array[idx] = tmp;
        }
    }
}

void insert_sort(int *array, int len)
{
    if(len < 2)
        return;
    int tmp = 0;
    int i = 0;
    int j = 0;
    for(i = 1; i < len; i++){
        tmp = array[i];
        for(j = i - 1; j >= 0 && tmp < array[j]; j--){
                array[j+1] = array[j];
        }
        array[j+1] = tmp;
    }
}

