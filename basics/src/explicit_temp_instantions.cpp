#include "explicit_temp_instantions.h"

/* without explicit instantiation, the definition gets unable to 
linked to callers in main
*/
template int Max_Explicit(int,int);

template <typename T>
T Max_Explicit(T a, T b) {
    return (a > b) ? a : b;
}