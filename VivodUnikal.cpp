﻿/******************************************************************************

Дан массив. Выведите те его элементы, которые встречаются в массиве только один раз. Элементы нужно выводить в том порядке, в котором они встречаются в списке.
Формат входных данных

В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
Формат выходных данных
Выведите ответ на задачу.
Sample Input 1:

6
1 2 2 3 3 3
Sample Output 1:

1
Sample Input 2:

8
4 3 5 2 5 1 3 5
Sample Output 2:

4 2 1

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n, p = 0;
    
    cin >> n;
    
    int A[n];
    
    for(int i = 0; i < n; i++) {
        cin >> A[i];
    }
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(A[i] == A[j]) {
                p++;
            }
        }
        if(p == 1) {
            cout << A[i] << " ";
        }
        p = 0;
    }
    
    return 0;
}
