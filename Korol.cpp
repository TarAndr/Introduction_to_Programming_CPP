#include <iostream>

using namespace std;

int main() {
    int i_from, j_from, i_to, j_to;
  
    cin >> i_from >> j_from >> i_to >> j_to;
  
    if(((i_from - i_to) == 1 || (i_from - i_to) == 0 || (i_from - i_to) == -1)
    && ((j_from - j_to) == 1 || (j_from - j_to) == 0 || (j_from - j_to) == -1)) {
        cout << "YES" << endl;
    } else {
            cout << "NO" << endl;
    }
  
  return 0;
}
