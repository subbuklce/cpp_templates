#include "template_specialization.h"
#include "utils.h"
#include "explicit_temp_instantions.h"
using namespace std;

int main() {

  // std::cout << "Area of rectangle: " << area(10, 20.5) << std::endl;
  // std::cout << "Area of rectangle: " << area_double(10, 20.5) << std::endl;
/* ---------------------------- Excersice 1 ----------------------------*/
  // char *a = "ABC";// "C++";
  // char *b = "XYZ"; //"Java";
  // cout << Max(a, b) << endl;

/* ---------------------------- Excersice 2 ----------------------------*/
  cout<<Max_Explicit(10,20);      // int only explicitly mentioned
  // double Not explicitly mentioned, so linker errors' appears
  // cout << Max_Explicit(10.5, 20.5) << endl; 
  

  return 0;
}