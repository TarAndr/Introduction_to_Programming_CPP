﻿/******************************************************************************

Даны два действительных числа x и y. Проверьте, принадлежит ли точка с координатами (x, y) заштрихованному квадрату (включая его границу). Если точка принадлежит квадрату, выведите слово YES, иначе выведите слово NO. На рисунке сетка проведена с шагом 1.



Решение должно содержать функцию IsPointInSquare(x, y), возвращающую True, если точка принадлежит квадрату и False, если не принадлежит. Основная программа должна считать координаты точки, вызвать функцию IsPointInSquare и в зависимости от возвращенного значения вывести на экран необходимое сообщение.

Функция IsPointInSquare не должна содержать инструкцию if.

Формат входных данных
Вводятся два действительных числа.
Формат выходных данных
Выведите ответ на задачу.
Sample Input 1:

0
0
Sample Output 1:

YES
Sample Input 2:

1
1
Sample Output 2:

NO

*******************************************************************************/

#include <iostream>

using namespace std;

bool IsPointInSquare(double x, double y) {
    x = ((x < 0) ? -x : x);
    y = ((y < 0) ? -y : y);
    return x + y <= 1;
}

int main()
{
    double a, b;
    
    cin >> a >> b;
    
    cout << ((IsPointInSquare(a, b)) ? "YES" : "NO") << endl;
    
    return 0;
}
