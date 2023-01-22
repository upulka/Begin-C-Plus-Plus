//Include the header file library. We are working with input/output objects such as "cout" and "cin"
#include <iostream>
#include "variables.cpp"
#include "strings.cpp"

int main() {
    std::cout << "Hello, World!" << std::endl;
    //Lesson on variables in C++
    std::cout << "\nvariables.cpp" << std::endl;
    variable();
    //Lesson on Strings in C++
    std::cout << "\nstrings.cpp" << std::endl;
    strings();
    return 0; // Ends the function with "return 0"
}
