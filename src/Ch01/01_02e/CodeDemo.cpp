// Learning C++ 
// Exercise 01_02
// Hello World, by Eduardo Corpeño 

#include <iostream>

int main(){
    std::cout << "Hi There!" << std::endl;

    std::cout << std::endl << std::endl;
    return (0); 
    // Exit code
    // 0: Success
    // 1: General Error
    // 2: Misuse of Shell Built-ins
    // 126: Command Invoked Cannot Execute
    // 127: Command Not Found
    // 128: Invalid Argument to Exit
    // 130: Script Terminated by Control-C (SIGINT)
    // 137: Termination by SIGKILL
    // 139: Segmentation Fault (SIGSEGV)
}
