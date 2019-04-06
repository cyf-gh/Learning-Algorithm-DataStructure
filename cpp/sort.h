#pragma once
#include <iostream>
#define PP_SWAP( a, b ) a ^= b; b ^= a; a ^= b

namespace ppalgor {
    /// \brief insertion sort
    /// \note ascend version 
    ///     Focus on where j stops.
    ///     elements rightside of j is absolutly sorted.
    ///     and cur will replace at j
    ///     -- e.g:
    ///         1 3 4 (2)
    ///     ->  1 3 4 4
    ///     ->  1 3 3 4
    ///     ->  1 (2) 3 4
    static inline int* insertion_sort( int **out_ppar, const unsigned int len ) {
        int j = 0;
        int * ar = *out_ppar;
        for( int i = 1; i < len; i++ ) {
            int cur = ar[i];
            for( j = i - 1; j >= 0 && ar[j] > /* change to < then you will get descend version */ cur; j-- ) {
                ar[j+1]=ar[j];
            }
            ar[j+1]=cur;            
        }
        return *out_ppar;
    }
    /*
    pseudocode

    procedure bubbleSort(A : list of sortable items )
        n = length(A)
        repeat
        swapped = false
        for i = 1 to n-1 inclusive do
            if this pair is out of order
            if A[i] > A[i+1] then
                swap them and remember something changed
                    swap (A[i], A[i+1] )
                    swapped = true
                end if
            end for
        until not swapped
    end procedure
    */
   /// \breif bubble sort
   /// \note ascend version
   ///      which compares the neighbor elements and make sure them in current order
   ///      the last loop must be 0 .. n and no swap operation
   static inline int * bubble_sort( int **out_ppar, const unsigned int len ) {
       int *ar = *out_ppar;
       bool swapped = false;
       
       FROM_BEGIN:
       swapped = false;
       for(size_t i = 0; i < len - 1; i++) {
           if ( ar[i] > ar[i+1] ) {
               // std::cout<< "at ["<< i << "] "<< std::endl << ar[i] << " " << ar[i+1] <<std::endl;
               PP_SWAP( ar[i], ar[i+1] );
               // std::cout<< ar[i] << " " << ar[i+1] << std::endl;
               swapped = true;
           }
       }
       if ( swapped == true ) {
           goto FROM_BEGIN; 
       }
       return ar;
   }
}