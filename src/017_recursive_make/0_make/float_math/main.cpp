// A simple example of linking against a dynamic library
// By: Nick from CoffeeBeforeArch

#include <iostream>

#include "add.h"
#include "multiply.h"

int main() {
    // Use our add function
    auto sum = add(10, 20);
    std::cout << "Sum: " << sum << '\n';
    
    // Use our multiply function
    auto product = multiply(10, 20);
    std::cout << "Product: " << product << '\n';
    return 0;
}
