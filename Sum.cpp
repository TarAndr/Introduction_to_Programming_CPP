﻿/******************************************************************************

Дана последовательность чисел, завершающаяся числом 0. Найдите сумму всех этих чисел, не используя цикл.

Формат входных данных
Вводится последовательность целых чисел, оканчивающаяся числом 0 (само число 0 в последовательность не входит, а служит как признак ее окончания).
Формат выходных данных
Выведите ответ на задачу.
Sample Input:

1
7
9
0
Sample Output:

17

*******************************************************************************/

#include <iostream>

using namespace std;

int sum() {
    int x;
    cin >> x;
    return ((x) ? x + sum() : 0);
}

int main()
{
    cout << sum() << endl;
    
    return 0;
}
