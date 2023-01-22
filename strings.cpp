#include <iostream>
#include <string>

int strings(){
    //String Concatenation
    std::string firstname = "Upulka";
    std::string lastname = "Kularatne";
    std::string fullname = firstname + " " + lastname;
    std::cout<< fullname <<std::endl;

    //String concatenation using "Append"
    std::string word1 = "Hello";
    std::string word2 = " World";
    std::string sentence = word1.append(word2);
    std::cout << sentence << std::endl;

    //String length
    std::string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::cout << "The length of the txt string is: " << txt.length() <<std::endl;
    std::cout << "The length of the txt string is: " << txt.size() << std::endl;

    //Access string
    std::string txt2 = "Perfect";
    std::cout << txt2[3] << std::endl;

    //Change string characters
    std::string txt3 = "Everything";
    std::cout << "Before changing a character : " << txt3 << std::endl;
    txt3[2] = 'A';
    std::cout << "After changing a character : " << txt3 << std::endl;
    return 0;
}