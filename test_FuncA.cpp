#include "FuncA.h"
#include <cassert>
#include <iostream>

void test_funcA() {
    FuncA func(1.0);  // Explicitly set x to 1.0
    assert(func.calculate(3) == 1 + 1 + 1); 
    std::cout << "All tests passed!\n";
}
int main() {
    test_funcA();
    return 0;
}
