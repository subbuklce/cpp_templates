#include <iostream>
#include <type_traits>

// auto deduction of return type
template <typename U, typename V>
auto area(U a, V b) {               // Type is automatically decuded to double.
    return a*b;
}


template <typename U, typename V>
std::common_type_t<U,V> area_double(U a, V b) {               // Type Traits.
    return a*b;
}

/*
template <typename U, typename V, typename ResultType=std::common_type_t<U,V>>
 area_double(U a, V b) {               // Type Traits.
    return a*b;
}
*/