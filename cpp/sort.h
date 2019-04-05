#pragma once

namespace ppalgor {
    /// \brief Insertion sort
    /// \note ascend 
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
}