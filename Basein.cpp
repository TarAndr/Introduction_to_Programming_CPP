﻿/*
Яша плавал в бассейне размером N×M метров и устал. В этот момент он обнаружил, что находится на расстоянии X метров от одного из длинных бортиков (не обязательно от ближайшего) и Y метров от одного из коротких бортиков. Какое минимальное расстояние должен проплыть Яша, чтобы выбраться из бассейна на бортик?

Формат входных данных
Программа получает на вход числа N, M, X, Y.
Формат выходных данных
Программа должна вывести число метров, которое нужно проплыть Яше до бортика.

Sample Input:

23
52
8
43
Sample Output:

8
*/

#include <iostream>

using namespace std;

int main() {
  
    int M, N, X, Y, ShortBoard, LongBoard;
  
    cin >> M >> N >> X >> Y;
  
    if(M > N) {
        LongBoard = M;
        ShortBoard = N;
    } else {
        LongBoard = N;
        ShortBoard = M;
    }
  
    if(ShortBoard - X < X) {
        X = ShortBoard - X;
    }
  
    if(LongBoard - Y < Y) {
        Y = LongBoard - Y;
    }
  
    if(X < Y) {
        cout << X << endl;
    } else {
        cout << Y << endl;
    }
  
  return 0;
}
