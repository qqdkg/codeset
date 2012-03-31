// sorting.h
#ifndef SORTING_H_
#define SORTING_H_

namespace sorting {

template <typename BidirectionalIterator, typename BinaryPredicate>
void insertion_sort(BidirectionalIterator first,
        BidirectionalIterator last, BinaryPredicate pred);

template <typename BidirectionalIterator>
inline void insertion_sort(
        BidirectionalIterator first, BidirectionalIterator last);

}  // namespace sorting

#include "sorting-inl.h"

#endif  // SORTING_H_