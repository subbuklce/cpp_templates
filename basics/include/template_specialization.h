#include<iostream>

template<typename T>
T Max(T a, T b) {
    return (a > b) ? a : b;
}


template<typename T>
T* Max(T* a, T* b) {
    std::cout << "Specialized version for pointers" << std::endl;
    return (*a > *b) ? a : b;
}
template<>
char* Max(char* a, char* b) {
    std::cout << "Specialized version for char*" << std::endl;
    return (strcmp(a, b) > 0) ? a : b;
}


//Notes 
/*
If char* Max is declared first then it is not treated as a specialization of the template function Max<T>.
The compiler will treat it as a separate function.
The specialization must be declared after the primary template function. And the primary template function 
for char* Max is third function.

char* a = "C++";
char* b = "Java";
cout<<Max(a, b)<<endl; // This will call the specialized version for pointers

swap char* Max & T* Max and see the magic.

*/