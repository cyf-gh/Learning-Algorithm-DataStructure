#include <iostream>
using namespace std;
#include "./sort.h"

#define arr_len_int( arr ) sizeof(arr)/sizeof( int )

int main() {
    int arr[] = { 1, 3, 4, 2, 9, 8, 7 };
    int * pa = arr;
    ppalgor::insertion_sort( &pa, arr_len_int( arr ) );
    for(size_t i = 0; i < arr_len_int(arr); i++)
    {
        cout<< arr[i] << ", ";
    }
    cout<< endl;
    return 0;   
}