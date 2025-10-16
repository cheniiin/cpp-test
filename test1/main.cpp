#include <iostream>
using namespace std;

int main() {
    // Printing star pattern using for loops
    cout << "Star Pattern: \n";
    for (int i = 1; i <= 6; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    // Printing multiplication table using while loops
    cout << "\nMultiplication Table: \n";
    int i = 1;
    while (i <= 9) {
        int j = 1;
        while (j <= 9) {
            cout << i << " * " << j << " = " << i * j << "\t";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}
