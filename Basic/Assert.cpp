#include <cassert>
#include<iostream>

int main() {
    int* timeArrayPtr = new int;  // Allocate memory for an integer using new

    // Assertion to check if the pointer is not nullptr
    assert(timeArrayPtr == nullptr);

    // Your code logic here

    // Don't forget to free the allocated memory when done
    printf("Hi");

    return 0;
}
