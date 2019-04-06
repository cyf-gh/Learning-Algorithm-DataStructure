#include <iostream>
using namespace std;
#include "./sort.h"

#define arr_len_int( arr ) sizeof(arr)/sizeof( int )

void TEST_INSERTIONSORT() {
    int arr[] = { 1, 3, 4, 2, 9, 8, 7 };
    int * pa = arr;
    ppalgor::insertion_sort_rec( &pa, arr_len_int( arr ) );
    for(size_t i = 0; i < arr_len_int(arr); i++)
    {
        cout<< arr[i] << ", ";
    }
    cout<< endl;
}

void TEST_BUBBLESORT() {
    int arr[] = { 1, 3, 4, 2, 9, 8, 7 };
    int * pa = arr;
    ppalgor::bubble_sort_opt_2( &pa, arr_len_int( arr ) );
    for(size_t i = 0; i < arr_len_int(arr); i++)
    {
        cout<< arr[i] << ", ";
    }
    cout<< endl;
}

int main() {
    TEST_INSERTIONSORT();
    return 0;   
}
