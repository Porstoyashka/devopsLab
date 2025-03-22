#include "FuncA.h"
#include <cmath>

// Обчислення суми перших n членів ряду
double FuncA::calculate(int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += pow(x, i); // Формула ряду
    }
    return sum;
}
