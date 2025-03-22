#ifndef FUNCA_H
#define FUNCA_H

class FuncA {
private:
    double x;

public:
    /**
     * Constructor
     * @param value - значення x для обчислення ряду
     */
    FuncA(double value = 0.5);

    /**
     * Обчислення суми перших n членів ряду
     * @param n - кількість членів, які потрібно підсумувати
     * @return значення суми
     */
    double calculate(int n);
};

#endif
