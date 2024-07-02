// Learning C++ 
// Challenge Solution 01_04
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>
// #include <chrono>
// #include <thread>

int main(){
    std::string str;
    std::cout << "Enter your name: " << std::flush; // cout is buffered, if don't explicitly flush or use endl to flush, it will only flush out at the end of execution. 
    // std::this_thread::sleep_for(std::chrono::seconds(10)); 
    std::cin >> str;
    std::cout << "Nice to meet you, " << str << "!" << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
