# cpp_templates
This page contains the source code examples of udemy course - Master Modern C++ Templates &amp; Advanced Techniques for Efficient, Reusable &amp; Generic Code

Notes:
 1. No difference in keeping templates as static 
        a. This will create a new instantiations for every inclusion call in files where it called.
        b. normal calls (without static specifier) will have a single instantiation and it will used across all function calls in the application. you can test it by printing function address like
        cout<< Square<int><<; // No parenthesis.


Explicit Template Instantiations tutorial
       : Refer explicit_temp_instantions.h/cpp files for better understandings.

       pros:
              Improve the overall build times
              we can hide the implementation into cpp file
              we can restrict the specific types only supported
       cons:
              generic disadvantage of having definitions in whereever files it is included.

       solution to cons:
              By using "extern" keyword for explicit instantition (not definition)
              ex: extern template double Max(double); - this ensures no multiple definitions by linker in all included files.

       static variables behavior in template functions/classes:
              the static nature gets applied to only for that dtype but not for all mixed dtypes
              temp<int> - behavior applied for int temp instations
              temp<string> - behavior applied for all string instantiations
              Note: the static nature is not shared among both int & string dtypes.
              
