#include <iostream>

using namespace std;

int main() {
    int i_in, j_in, i_out, j_out;
  
    cin >> i_in >> j_in >> i_out >> j_out;
  
    if(i_in == i_out || j_in == j_out) {
        cout << "YES" << endl;
    } else {
            cout << "NO" << endl;
    }
  
  return 0;
}
