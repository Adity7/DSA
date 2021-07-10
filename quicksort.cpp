#include <iostream>
#include <cstdlib>
using namespace std;

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int a[], int low, int hight){
    int pivot, index, i;
    index = low;
    pivot = high;

    //Getting index of pivot
    for(int i=low; i<high; i++){
        if(a[i]<a[pivot]){
            swap(&a[i], &a[index]);
            index ++;
        }

        swap(&a[pivot], &a[index]);
        return index;
    }
}

int RandomPivotPartition(int a[], int low, int high){
    int pivot, n, temp;
    n = rand();
    pivot = low + n%(high-low+1);
    swap(&a[high], &a[pivot]);
    return partition(a, low, high);
}

int QuickSort(int a[], int low, int high){
    int pindex;
    if(low<high){
        pindex = RandomPivotPartition(a, low , high);
        QuickSort(a, low, pindex-1);
        QuickSort(a, pindex+1, high);

    }

    return 0;
}