//main is for testing purposes

#include <iostream>
#include "stack.h"
using std::cout;
using std::endl;
using std::string;

int main(){
    //Create Stack objects of types int, std::string, and float
    Stack<int> A;
    Stack<std::string> B;
    Stack<float> C;

    //create temp variables to hold the top values of the stacks
    int tempA = 0;
    std::string tempB = "";
    float tempC = 0.00;

    //push two values onto Stack A, stack of integers
    A.push(1);
    A.push(2);

    //print the size of Stack A, size should be 2
    std::cout << A.size() << endl;

    //print the value at the top of the stack
    if(A.top(tempA))
        std::cout << tempA << std::endl;
    
    //pop both values off of the stack
    A.pop();
    A.pop();

    //check that the stack is empty
    if(A.empty())
        std::cout << "Stack A is empty" << std::endl;
    

    //push 3 values onto stack B, stack of strings
    B.push("fun1");
    B.push("fun2");
    B.push("fun3");
    
    //print the first value on the stack
    if(B.top(tempB))
        std::cout << tempB << std::endl;
    
    //pop two value off the stack
    B.pop();
    B.pop();
    
    //check if the stack is empty
    //the stack should not be empty, so this statement should not be printed
    if(B.empty())
        std::cout << "Stack B should not be empty" << std::endl;
    
    //push three values onto Stack C, stack of floats
    C.push(1.23);
    C.push(3.14);
    C.push(5.42);
    C.push(7);
    
    //check the value on the top of stack C
    if(C.top(tempC))
        std::cout << tempC << std::endl;
    
    //deconstructors are called and all remaining values in stacks that haven't been popped are popped
    return 0;

}