# cpp_templates
This page contains the source code examples of udemy course - Master Modern C++ Templates &amp; Advanced Techniques for Efficient, Reusable &amp; Generic Code

Notes:
 1. No difference in keeping templates as static 
        a. This will create a new instantiations for every inclusion call in files where it called.
        b. normal calls (without static specifier) will have a single instantiation and it will used across all function calls in the application. you can test it by printing function address like
        cout<< Square<int><<; // No parenthesis.