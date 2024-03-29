/******************************************************************************

Процентная ставка по вкладу составляет P процентов годовых, которые прибавляются к сумме вклада в конце года. Вклад составляет X рублей Y копеек. Определите размер вклада через год.


При решении этой задачи нельзя пользоваться условными инструкциями и циклами.

Формат входных данных
Программа получает на вход целые числа P, X, Y.
Формат выходных данных
Программа должна вывести два числа: величину вклада через год в рублях и копейках. Дробная часть копеек отбрасывается.
Sample Input:

12
179
0
Sample Output:

200 48

*******************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double P, X, Y;
    
    cin >> P >> X >> Y;
    
    X += Y / 100;
    X += X * P / 100;
    Y = trunc(X * 100 - trunc(X) * 100);
    X = trunc(X);
    
    cout << X << " " << Y << endl;
    
    return 0;
}
