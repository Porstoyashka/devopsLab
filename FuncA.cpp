#include "FuncA.h"
#include <cmath>

double FuncA::calculate() {
    int n = 3;
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += pow(x, i);
    }
    return sum;
}
