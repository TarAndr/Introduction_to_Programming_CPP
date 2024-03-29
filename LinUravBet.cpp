﻿/******************************************************************************

Даны вещественные числа a, b, c, d, e, f. Решите систему линейных уравнений




Формат входных данных

Вводятся шесть чисел - коэффициенты уравнений системы.
Формат выходных данных
Вывод программы зависит от вида решения этой системы.

Если система не имеет решений, то программа должна вывести единственное число 0.

Если система имеет бесконечно много решений, каждое из которых имеет вид y=kx+n, то программа должна вывести число 1, а затем значения k и n.

Если система имеет единственное решение (x0, y0), то программа должна вывести число 2, а затем значения x0 и y0.

Если система имеет бесконечно много решений вида x=x0, y — любое, то программа должна вывести число 3, а затем значение x0.

Если система имеет бесконечно много решений вида y=y0, x — любое, то программа должна вывести число 4, а затем значение y0.

Если любая пара чисел (x, y)  является решением, то программа должна вывести число 5.

Sample Input 1:

1
0
0
1
3
3
Sample Output 1:

2 3 3
Sample Input 2:

1
1
2
2
1
2
Sample Output 2:

1 -1 1
Sample Input 3:

0
2
0
4
1
2
Sample Output 3:

4 0.5
Sample Input 4:

2
3
4
6
1
2
Sample Output 4:

1 -0.666667 0.333333
Sample Input 5:

0
1
0
3
5
15
Sample Output 5:

4 5
Sample Input 6:

1
0
1
0
3
3
Sample Output 6:

3 3

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    double a, b, c, d, e, f, x, y;
    
    cin >> a >> b >> c >> d >> e >> f;
    
    if(!(a * d - b * c) && ((e * d - b * f) || (a * f - c * e))
    || (!a && !b && !c && !d && (e || f))) {
        cout << 0 << endl;
    } else
    if(!a && !b && !c && !d && !e && !f) {
        cout << 5 << endl;
    } else
    if(!a && !c) {
        y = ((!b) ? f / d : e / b);
            cout << 4 << " " << y << endl;
    } else
    if(!b && !d) {
        x = ((!a) ? f / c : e / a);
        cout << 3 << " " << x << endl;
    } else
    if(a * d - b * c) {
        x = (e * d - b * f) / (a * d - b * c);
        y = (a * f - c * e) / (a * d - b * c);
        cout << 2 << " " << x << " " << y << endl;
    } else 
    if(!(e * d - b * f) && !(a * f - c * e)) {
        x = ((!b) ? - c / d : - a / b);
        y = ((!b) ? f / d : e / b);
        cout << 1 << " " << x << " " << y << endl;
    }
    
    return 0;
}
