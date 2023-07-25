#include <iostream>

void myFunction() {
    std::cout << "Hello, I am myFunction!" << std::endl;
}

int main() {
    std::cout << "myFunction address: " << myFunction << std::endl;
    return 0;
}