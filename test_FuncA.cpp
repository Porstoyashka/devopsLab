#include "FuncA.h"
#include <cassert>
#include <iostream>
#include <vector>
#include <random>
#include <chrono>

void test_funcA() {
    FuncA func(1.0);  // Explicitly set x to 1.0
    assert(func.calculate(3) == 1 + 1 + 1); 
    std::cout << "Basic FuncA test passed!\n";
}

void test_computation_time() {
    std::cout << "Running performance test...\n";
    
    auto t1 = std::chrono::high_resolution_clock::now();

    std::vector<int> aValues;
    // Mersenne Twister random engine with fixed seed for reproducibility
    std::mt19937 mtre{123};
    std::uniform_int_distribution<int> distr{0, 2000000};

    // Create FuncA object with x=1.0
    FuncA func(1.0);
    
    // Generate random values - same as in HTTP_Server.cpp
    for (int i=0; i<2000000; i++) {
        aValues.push_back(distr(mtre));
    }

    // Use FuncA to calculate values - same algorithm as in HTTP_Server.cpp
    double result = 0.0;
    
    for (int i=0; i<2000; i++) {
        for (size_t j=0; j<aValues.size(); j++) {
            if (j % 100 == 0) {
                result += func.calculate(aValues[j] % 50);
            }
        }
    }
    
    auto t2 = std::chrono::high_resolution_clock::now();
    auto duration_ms = std::chrono::duration_cast<std::chrono::milliseconds>(t2-t1);

    int execution_time_ms = duration_ms.count();
    std::cout << "Computation time: " << execution_time_ms 
              << " ms, Result: " << result << std::endl;
    
    // Check that execution time is between 10 and 20 seconds
    assert(execution_time_ms >= 10000 && execution_time_ms <= 20000);
    
    std::cout << "Performance test passed! Execution time is within expected range (10-20 seconds).\n";
}

int main() {
    test_funcA();
    test_computation_time();
    return 0;
}