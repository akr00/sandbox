#include <iostream>

int main() {

    int num = 42;   //declare int
    int* x;     // declares a pointer that can hold the address of int
    x = &num;   // sets pointer to hold the address of num, num becomes pointee

    std::cout << x;  // print address

    std::cout << *x;    // print value of pointee




    return 0;
}