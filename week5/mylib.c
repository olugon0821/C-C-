#include <stdio.h>
#include <stdlib.h>
#include "mylib.h"

int add(int a,int b){
    int sum = a + b;
    return sum;
}

int minus(int a, int b){
    int minus = a - b;
    return minus;
}

int multiple(int a, int b){
    int multiple = a * b;
    return multiple;
}

double divide(double a, double b){
    double divide = (double)a / b;
    return divide;
}