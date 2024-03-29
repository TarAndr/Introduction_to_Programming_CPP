﻿/******************************************************************************

Даны длины сторон треугольника. Вычислите площадь треугольника.
Формат входных данных
Вводятся три положительных числа.
Формат выходных данных
Выведите ответ на задачу.
Sample Input:

3
4
5
Sample Output:

6

*******************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c, S;
    
    cin >> a >> b >> c;
    
    S = (a + b + c) / 2;
    S = sqrt(S * (S - a) * (S - b) * (S - c));
    
    cout << S << endl;
    
    return 0;
}
