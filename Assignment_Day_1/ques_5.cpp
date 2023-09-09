#include <iostream>
/*Print the X pattern*/
using namespace std;

int main() {
    int n;
    cin >> n;

    // Loop to print the X pattern
     for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == n / 2 && j == n / 2) {
                cout << "X";
            }
            else if (i == j) {
                cout << "\\";
            }
            else if (i == n - 1 - j) {
                cout << "/";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
