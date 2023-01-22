#include <iostream>
#include <string>

int variable(){
    int intNum;
    double doubleNum = 12.23;
    float floatNum = 23.234;
    char letter = 'D';
    bool boolVal = true;
    //If you want to use string, include the <string> library. Also use "std" with the "string"
    std::string sentence = "Hello";


    intNum = 16;
    std::cout<<intNum << std::endl;
    std::cout<<doubleNum << std::endl;
    std::cout<<floatNum << std::endl;
    std::cout<<letter << std::endl;
    std::cout<<boolVal << std::endl;
    std::cout<<sentence << std::endl;
    return 0;
}